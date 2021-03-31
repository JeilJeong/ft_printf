/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_num_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:48:54 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/30 17:48:55 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int					ft_num_base(t_flag *flag)
{
	char	type;

	type = flag->type;
	if (type == 'x' || type == 'X' || type == 'p')
		return (16);
	return (10);
}

unsigned long long	ft_sign_change(unsigned long long num, t_flag *flag)
{
	int	n;

	n = (int)num;
	if ((flag->type == 'd' || flag->type == 'i') && (n < 0))
		num *= -1;
	return (num);
}

int			put_width_str(char **buf, t_flag *flag)
{
	char	*width;
	int		i;

	if (flag->width <= (int)ft_str_len(*buf))
		return ((int)ft_str_len(*buf));
	width = (char *)malloc(sizeof(char) * (flag->width - ft_str_len(*buf) + 1));
	i = 0;
	while (i < flag->width - ft_str_len(*buf))
	{
		width[i] = (flag->zero == 1) ? '0' : ' ';
		i++;
	}
	width[i] = '\0';
	if (flag->minus == 0)
		*buf = ft_strjoin(width, *buf, 3);
	else
		*buf = ft_strjoin(*buf, width, 3);
	return (flag->width);
}
