/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:30:31 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/30 15:52:25 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_flag	ft_init_flag(void)
{
	t_flag	flag;

	flag.minus = 0;
	flag.zero = 0;
	flag.width = 0;
	flag.dot = -1;
	flag.type = 0;
	return  (flag);
}

int	ft_is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
			|| c == 'i' || c == 'u' || c == 'x'
			|| c == 'X' || c == '%')
		return (1);
	return (0);
}

void	ft_asterisk_flag(va_list ap, t_flag *flag)
{
	// asterisk that is related with format width flag
	if (flag->dot == -1)
	{
		if ((flag->width = va_arg(ap, int)) < 0)
		{
			flag->minus = 1;
			flag->width *= -1;
		}
	}
	// asterisk that is related with format precision flag
	else
		flag->dot = va_arg(ap, int);

}

void	ft_num_flag(t_flag *flag, const char *format, int i)
{
	if (flag->dot == -1)
		flag->width = flag->width * 10 + (format[i] - '0');
	else
		flag->dot = flag->dot * 10 + (format[i] - '0');
}

int	ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_check_flag(va_list ap, t_flag *flag, const char *format, int i)
{
	// When the input is width:20 or precision:.20, in that case zero exist just for digit.
	if (format[i] == '0' && flag->width == 0 && flag->dot == -1)
		flag->zero = 1;
	else if (format[i] == '-')
		flag->minus = 1;
	else if (format[i] == '.')
		flag->dot = 0;
	else if (format[i] == '*')
		ft_asterisk_flag(ap, flag);
	else if (ft_is_num(format[i]))
		ft_num_flag(flag, format, i);
}

void	ft_flag_priority(t_flag *flag)
{
	if (flag->type != '%' && (flag->minus == 1 || flag->dot != -1))
	{
		if (!((flag->type == 'c' || flag->type == 's')
				&& flag->minus == 0 && flag->dot != -1))
			flag->zero = 0;
	}
	else if (flag->type == '%' && flag->minus == 1)
		flag->zero = 0;
}

int	ft_print_width(t_flag *flag, int len)
{
	int	count;

	count = 0;
	while (len < flag->width)
	{
		if (flag->zero)
			ft_putchar('0', 1);
		else
			ft_putchar(' ', 1);
		len++;
		count++;
	}
	return (count);
}

int	ft_print_char(int c, t_flag *flag)
{
	int	count;
	int	len;
	
	count = 0;
	len = 1;
	if (flag->minus)
		count += ft_putchar(c, 1);
	count += ft_print_width(flag, len);
	if (!flag->minus)
		count += ft_putchar(c, 1);
	return (count);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (6);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_put_str(char *str, t_flag *flag)
{
	int	i;
	int	len;

	i = 0;
	len = flag->dot > 0 ? flag->dot : 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (flag->dot != -1)
	{
		while (str[i] != '\0' && i < len)
			ft_putchar(str[i++], 1);
	}
	else
		while (str[i] != '\0')
			ft_putchar(str[i++], 1);
	return (i);
}

int	ft_print_width_str(t_flag *flag, int len)
{
	int	i;
	int	width;

	i = 0;
	if (flag->dot == -1)
		width = flag->width - len;
	else
		width = flag->width - (flag->dot < len ? flag->dot : len);
	while (i < width)
	{
		if (flag->zero)
			ft_putchar('0', 1);
		else
			ft_putchar(' ', 1);
		i++;
	}
	return (i);
}

int	ft_print_str(char *str, t_flag *flag)
{
	int	count;
	int	len;
	
	count = 0;
	len = ft_str_len(str);
	if (flag->minus)
		count += ft_put_str(str, flag);
	count += ft_print_width_str(flag, len);
	if (!flag->minus)
		count += ft_put_str(str, flag);
	return (count);
}

int	ft_num_base(t_flag *flag)
{
	char	type;

	type = flag->type;
	if (type == 'x' || type == 'X' || type == 'p')
		return (16);
	return (10);
}

unsigned long long	ft_sign_change(unsigned long long num, t_flag *flag)
{
	if ((flag->type == 'd' || flag->type == 'i') && (int)num < 0)
		num *= -1;
	return (num);
}

int	ft_num_len(unsigned long long num, t_flag *flag)
{
	int	i;
	int	base;

	i = 1;
	base = ft_num_base(flag);
	num = ft_sign_change(num, flag);
	while (num >= base)
	{
		i++;
		num /= base;
	}
	return (i);
}

void	ft_put_num(char *buf, unsigned long long num, t_flag *flag)
{
	int	base;
	int	i;
	
	base = ft_num_base(flag);
	num = ft_sign_change(num, flag);
	if (num >= base)
		ft_put_num(buf, num / base, flag);
	i = 0;
	while (buf[i] != '\0')
		i++;
	if (base == 10)
		buf[i] = (num % base) + '0';
	else if (flag->type == 'x' || flag->type == 'p')
		buf[i] = "0123456789abcdef"[num % base];
	else if (flag->type == 'X')
		buf[i] = "0123456789ABCDEF"[num % base];
}

char	*ft_init_buf(unsigned long long num, t_flag *flag)
{
	char	*buf;
	int	buf_len;
	int	num_len;
	int	i;

	num_len = ft_num_len(num, flag);
	buf_len = (num_len > flag->dot) ? num_len : flag->dot;
	if ((buf = (char *)malloc(sizeof(char) * (buf_len + 1))) == NULL)
		return (NULL);
	buf[buf_len] = '\0';
	i = 0;
	while (buf[i] != '\0')
		buf[i++] = '\0';
	i = 0;
	while (num_len + i < buf_len)
	{
		buf[i] = '0';
		i++;
	}
	ft_put_num(buf, num, flag);
	return (buf);
}

int	ft_put_str_num(char *str)
{
	int	i;
	
	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

char	*ft_create_width_buf(int len, t_flag *flag)
{
	int	i;
	char	*buf;

	i = 0;
	if ((buf = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	buf[len] = '\0';
	while (i < len)
	{
		if (flag->zero)
			buf[i] = '0';
		else
			buf[i] = ' ';
		i++;
	}
	return (buf);
}

char	*ft_join_buf(char *buf_1, char *buf_2)
{
	char	*ret;
	int	len;
	int	i;
	int	j;

	len = ft_str_len(buf_1) + ft_str_len(buf_2);
	if ((ret = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	ret[len] = '\0';
	i = 0;
	j = 0;
	while (buf_1[i] != '\0')
	{
		ret[j++] = buf_1[i];
		i++;
	}
	i = 0;
	while (buf_2[i] != '\0')
	{
		ret[j++] = buf_2[i];
		i++;
	}
	return (ret);
}

char	*ft_put_width(char *buf, unsigned long long num, t_flag *flag)
{
	int	diff;
	char	*width_buf;
	char	*ret;

	diff = flag->width - ((ft_num_len(num, flag) > flag->dot) ? ft_num_len(num, flag) : flag->dot);
	if (diff > 0 )
	{
		if ((width_buf = ft_create_width_buf(diff, flag)) == NULL)
			return (NULL);
		ret = (flag->minus == 1) ? ft_join_buf(buf, width_buf) : ft_join_buf(width_buf, buf);
		if (ret == NULL)
			return (NULL);
	}
	else
		ret = buf;
	return (ret);
}

int	ft_print_int_num(unsigned long long num, t_flag *flag)
{
	int 	count;
	char	*buf;

	count = 0;
	if ((buf = ft_init_buf(num, flag)) == NULL)
		return (NULL);
	buf = ft_put_width(buf, num, flag);
	count += ft_put_str_num(buf);
	return (count);
}

int	ft_print_arg(va_list ap, t_flag *flag)
{
	int	count;

	count = 0;
	if (flag->type == 'c')
		count = ft_print_char(va_arg(ap, int), flag);
	else if (flag->type == 's')
		count = ft_print_str(va_arg(ap, char *), flag);
	else if (flag->type == 'p')
		count = ft_print_int_num(va_arg(ap, unsigned long long), flag);
	else if (flag->type == 'd' || flag->type == 'i')
		count = ft_print_int_num((unsigned long long)va_arg(ap, int), flag);
	else if (flag->type == 'u' || flag->type == 'x'
			|| flag->type == 'X')
		count = ft_print_int_num((unsigned long long)va_arg(ap, unsigned int), flag);
	else if (flag->type == '%')
		count = ft_print_char('%', flag);
	return (count);
}

int	ft_parse_format(va_list ap, const char *format)
{
	int	i;
	int	count;
	t_flag	flag;

	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			//restore i value for printing %
			flag = ft_init_flag();
			while (format[++i] != '\0' && !ft_is_type(format[i]))
				ft_check_flag(ap, &flag, format, i);
			flag.type = format[i++];
			ft_flag_priority(&flag);
			count += ft_print_arg(ap, &flag);
		}
		else
			count += ft_putchar(format[i++], 1);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int	count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	if (format == NULL)
		return (-1);
	count = ft_parse_format(ap, format);
	va_end(ap);
	return (count);
}

