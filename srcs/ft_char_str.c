/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:48:13 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/30 21:43:05 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
		while ("(null)"[i] != '\0' && i < len)
			write(1, &"(null)"[i++], 1);
		return (i);
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
