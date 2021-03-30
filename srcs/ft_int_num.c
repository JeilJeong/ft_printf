/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:48:34 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/30 18:02:24 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_put_width(char *buf, unsigned long long num, t_flag *flag)
{
	int		diff;
	char	*width_buf;
	char	*ret;

	diff = flag->width - ((ft_num_len(num, flag) > flag->dot) ?\
			ft_num_len(num, flag) : flag->dot);
	if (num == 0 && flag->dot == 0)
		diff = flag->width;
	if (diff > 0)
	{
		if ((width_buf = ft_create_width_buf(diff, num, flag)) == NULL)
			return (NULL);
		ret = (flag->minus == 1) ? ft_join_buf(buf, width_buf) : \
		ft_join_buf(width_buf, buf);
		if (ret == NULL)
			return (NULL);
	}
	else
		ret = buf;
	return (ret);
}

char	*ft_put_hex_prefix(char *buf)
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

char	*ft_put_neg_mark(char *buf, unsigned long long num)
{
	char	*prefix;
	char	*ret;
	int		n;

	n = (int)num;
	if (n < 0)
	{
		if ((prefix = (char *)malloc(sizeof(char) * 2)) == NULL)
			return (0);
		prefix[0] = '-';
		prefix[1] = '\0';
		ret = ft_join_buf(prefix, buf);
	}
	else
		ret = buf;
	return (ret);
}

int		ft_print_int_num(unsigned long long num, t_flag *flag)
{
	int		count;
	char	*buf;

	count = 0;
	if ((buf = ft_init_buf(num, flag)) == NULL)
		return (0);
	if ((flag->type == 'd' || flag->type == 'i') && flag->zero == 0)
		buf = ft_put_neg_mark(buf, num);
	buf = ft_put_width(buf, num, flag);
	if ((flag->type == 'd' || flag->type == 'i') && flag->zero == 1)
		buf = ft_put_neg_mark(buf, num);
	if (flag->type == 'p')
		buf = ft_put_hex_prefix(buf);
	count += ft_put_str_num(buf);
	free(buf);
	return (count);
}

char	*ft_join_buf(char *buf_1, char *buf_2)
{
	char	*ret;
	int		len;
	int		i;
	int		j;

	len = ft_str_len(buf_1) + ft_str_len(buf_2);
	if ((ret = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	ret[len] = '\0';
	i = 0;
	j = 0;
	while (buf_1[i] != '\0')
		ret[j++] = buf_1[i++];
	i = 0;
	while (buf_2[i] != '\0')
		ret[j++] = buf_2[i++];
	free(buf_1);
	free(buf_2);
	return (ret);
}
