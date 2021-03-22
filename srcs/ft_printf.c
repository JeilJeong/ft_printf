/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:30:31 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/22 11:30:15 by jejeong          ###   ########.fr       */
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

void	ft_asterisk_flag(t_flag *flag, const char *format, int i)
{
	// asterisk that is related with format width flag
	if (format->dot == -1)
	{
		if ((format->width = va_arg(ap, int)) < 0)
		{
			format->minus = 1;
			format->width *= -1;
		}
	}
	// asterisk that is related with format precision flag
	else
		format->dot = va_arg(ap, int);

}

void	ft_num_flag(t_flag *flag, const char *format, int i)
{
	if (format->dot == -1)
		format->width = format->width * 10 + (format[i] - '0');
	else
		format->dot = format->dot * 10 + (format[i] - '0');
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
		ft_asterisk_flag(ap, flag, format, i);
	else if (ft_is_num(format[i]))
		ft_num_flag(flag, format, i);
}

void	ft_flag_priority(t_flag *flag)
{
	if ((flag->
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
			flag->type = format[i++];
			ft_flag_priority(&flag);
		}
		else
			count += ft_putchar(format[i++], 1);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	ft_parse_format(ap, format);
}

