/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segfault.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:50:35 by jejeong           #+#    #+#             */
/*   Updated: 2021/04/01 15:50:37 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_segfault(t_flag *flag, const char *format, int *i, int *mark)
{
	if (!ft_is_type(flag->type = format[*i]))
	{
		*i = *mark;
		return (0);
	}
	*mark = -1;
	*i = *i + 1;
	ft_flag_priority(flag);
	return (1);
}

char	ft_pct(char c, int *check, int *mark, int *i)
{
	if (c == '%')
	{
		*check += 1;
		if (*check == 2)
		{
			*check = 0;
			*mark = -1;
			*i += -1;
			return ('\0');
		}
	}
	return (c);
}
