/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 12:28:13 by jejeong           #+#    #+#             */
/*   Updated: 2021/04/01 12:28:15 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int					ft_num_base(t_flag *flag)
{
	char	type;

	type = flag->type;
	if (type == 'p' || type == 'x' || type == 'X')
		return (16);
	return (10);
}

unsigned long long	ft_sign_change(unsigned long long num, t_flag *flag)
{
	int	n;

	n = (int)num;
	if ((flag->type == 'd' || flag->type == 'i') && n < 0)
		num = -num;
	return (num);
}

int					ft_num_len(unsigned long long num, t_flag *flag)
{
	int					i;
	unsigned long long	base;

	if (num == 0 && flag->dot != 0)
		return (1);
	i = 0;
	num = ft_sign_change(num, flag);
	base = ft_num_base(flag);
	while (num > 0)
	{
		num /= base;
		i++;
	}
	return (i);
}

char				*ft_put_neg_mark(char *buf, \
unsigned long long num, t_flag *flag)
{
	char	*prefix;
	char	*ret;
	int		n;

	ret = buf;
	n = (int)num;
	if (n < 0)
	{
		if (flag->zero == 1 && ft_str_len_num(buf) < flag->width)
			buf[0] = '-';
		else
		{
			if ((prefix = (char *)malloc(sizeof(char) * 2)) == NULL)
				return (0);
			prefix[0] = '-';
			prefix[1] = '\0';
			ret = ft_join_buf(prefix, buf);
		}
	}
	return (ret);
}

char				*ft_put_hex_prefix(char *buf)
{
	char	*prefix;
	char	*ret;

	if ((prefix = (char *)malloc(sizeof(char) * 3)) == NULL)
		return (0);
	prefix[0] = '0';
	prefix[1] = 'x';
	prefix[2] = '\0';
	ret = ft_join_buf(prefix, buf);
	return (ret);
}
