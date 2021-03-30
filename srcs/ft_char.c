/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str_sub.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:48:22 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/30 17:56:55 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
