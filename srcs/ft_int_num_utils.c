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
