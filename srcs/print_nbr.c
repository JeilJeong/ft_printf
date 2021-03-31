/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 20:36:08 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/31 20:36:10 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			put_pointer_prefix(char **buf)
{
	*buf = ft_strjoin("0x", *buf, 2);
	return (ft_str_len(*buf));
}

int			put_minus(t_flag *flag, char **buf, unsigned long long num)
{
	int		len_to_add;
	int		n;

	n = (int)num;
	len_to_add = 0;
	if ((flag->type == 'i' || flag->type == 'd') &&
					flag->zero == 0 && n < 0)
	{
		*buf = ft_strjoin("-", *buf, 2);
		len_to_add = 1;
	}
	return (len_to_add);
}

int			put_minus2(int buf_len, t_flag *flag, \
char **buf, unsigned long long num)
{
	int		len_to_add;
	int		n;

	n = (int)num;
	len_to_add = 0;
	if (n < 0 && flag->zero == 1)
	{
		if (buf_len >= flag->width)
		{
			*buf = ft_strjoin("-", *buf, 2);
			len_to_add = 1;
		}
		else if (buf_len < flag->width)
			*buf[0] = '-';
	}
	return (len_to_add);
}

int			put_prec_str(unsigned long long nbr, \
t_flag *flag, char **buf, unsigned long long base)
{
	int		buf_len;
	int		ret;
	int		i;

	buf_len = ft_num_len(nbr, flag);
	ret = (flag->dot > buf_len) ? flag->dot : buf_len;
	if (!(*buf = (char *)malloc(sizeof(char) * ret + 1)))
		return (0);
	i = 0;
	(*buf)[ret] = '\0';
	while (buf_len + i < ret)
	{
		(*buf)[i] = '0';
		i++;
	}
	i = 1;
	if (nbr == 0 && flag->dot != 0)
		(*buf)[ret - i] = '0';
	while (nbr)
	{
		(*buf)[ret - i] = ft_baseset(flag->type)[nbr % base];
		nbr /= base;
		i++;
	}
	return (buf_len);
}

int			print_nbr(unsigned long long nbr, t_flag *flag)
{
	char				*buf;
	int					buf_len;
	int					ret;
	unsigned long long	base;

	if (flag->type == 'x' || flag->type == 'X' || flag->type == 'p')
		base = 16;
	buf_len = put_prec_str(nbr, flag, &buf, base);
	buf_len += put_minus(flag, &buf, nbr);
	if (flag->type == 'p')
		buf_len = put_pointer_prefix(&buf);
	ret = put_width_str(&buf, flag);
	ret += put_minus2(buf_len, flag, &buf, nbr);
	ft_put_str_num(buf);
	free(buf);
	return (ret);
}
