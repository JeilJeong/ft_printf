/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:30:31 by jejeong           #+#    #+#             */
/*   Updated: 2021/04/01 14:28:21 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag_priority(t_flag *flag)
{
	if (flag->type != '%' && (flag->minus == 1 || flag->dot > -1))
		flag->zero = 0;
	else if (flag->type == '%' && flag->minus == 1)
		flag->zero = 0;
}

int		ft_print_arg(va_list ap, t_flag *flag)
{
	int	count;

	count = 0;
	if (flag->type == 'c')
		count = ft_print_char(va_arg(ap, int), flag);
	else if (flag->type == 's')
		count = ft_print_str(va_arg(ap, char *), flag);
	else if (flag->type == 'p')
		count = ft_print_int(va_arg(ap, unsigned long long), flag);
	else if (flag->type == 'd' || flag->type == 'i')
		count = ft_print_int(va_arg(ap, int), flag);
	else if (flag->type == 'u' || flag->type == 'x'
			|| flag->type == 'X')
		count = ft_print_int(va_arg(ap, unsigned int), flag);
	else if (flag->type == '%')
		count = ft_print_char('%', flag);
	return (count);
}

int		ft_segfault(t_flag *flag, const char *format, int *i, int *mark)
{
	if ((flag->type = format[*i]) == '\0')
	{
		*i = 0;
		return (0);
	}
	*mark = 0;
	*i = *i + 1;
	return (1);
}

int		ft_parse_format(va_list ap, const char *format)
{
	int		i;
	int		count;
	int		mark;
	t_flag	flag;

	i = 0;
	count = 0;
	mark = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && mark == 0)
		{
			mark = i;
			flag = ft_init_flag();
			while (format[++i] != '\0' && !ft_is_type(format[i]))
				ft_check_flag(ap, &flag, format, i);
			if (ft_segfault(&flag, format, &i, &mark))
			{
				ft_flag_priority(&flag);
				count += ft_print_arg(ap, &flag);
			}
		}
		else
			count += ft_putchar(format[i++], 1);
	}
	return (count);
}

int		ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	if (format == NULL)
		return (-1);
	count = ft_parse_format(ap, format);
	va_end(ap);
	return (count);
}
