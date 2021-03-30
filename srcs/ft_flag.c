/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:48:28 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/30 17:51:24 by jejeong          ###   ########.fr       */
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
	return (flag);
}

int		ft_is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
			|| c == 'i' || c == 'u' || c == 'x'
			|| c == 'X' || c == '%')
		return (1);
	return (0);
}

void	ft_asterisk_flag(va_list ap, t_flag *flag)
{
	if (flag->dot == -1)
	{
		if ((flag->width = va_arg(ap, int)) < 0)
		{
			flag->minus = 1;
			flag->width *= -1;
		}
	}
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

void	ft_check_flag(va_list ap, t_flag *flag, const char *format, int i)
{
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
