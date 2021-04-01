/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 09:14:55 by jejeong           #+#    #+#             */
/*   Updated: 2021/04/01 12:17:30 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_join_buf(char *buf_1, char *buf_2)
{
	char	*ret;
	int		ret_len;
	int		i;
	int		j;

	ret_len = ft_str_len_num(buf_1) + ft_str_len_num(buf_2);
	if ((ret = (char *)malloc(sizeof(char) * (ret_len + 1))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (buf_1[i] != '\0')
		ret[j++] = buf_1[i++];
	i = 0;
	while (buf_2[i] != '\0')
		ret[j++] = buf_2[i++];
	free(buf_1);
	free(buf_2);
	ret[j] = '\0';
	return (ret);
}

void	ft_put_num(unsigned long long num, t_flag *flag, char **buf, int len)
{
	int		i;
	int		base;
	char	*ptr;
	char	type;

	i = 1;
	num = ft_sign_change(num, flag);
	base = ft_num_base(flag);
	ptr = *buf;
	type = flag->type;
	while (num > 0)
	{
		if (type == 'd' || type == 'i' || type == 'u')
			ptr[len - i] = "0123456789"[num % base];
		else if (type == 'p' || type == 'x')
			ptr[len - i] = "0123456789abcdef"[num % base];
		else if (type == 'X')
			ptr[len - i] = "0123456789ABCDEF"[num % base];
		num /= base;
		i++;
	}
}

char	*ft_init_buf(unsigned long long num, t_flag *flag)
{
	char	*ret;
	int		num_len;
	int		ret_len;
	int		i;

	num_len = ft_num_len(num, flag);
	ret_len = num_len > flag->dot ? num_len : flag->dot;
	if ((ret = (char *)malloc(sizeof(char) * (ret_len + 1))) == NULL)
		return (NULL);
	ret[ret_len] = '\0';
	i = 0;
	while (num_len < ret_len)
	{
		ret[i++] = '0';
		num_len++;
	}
	if (num == 0 && flag->dot != 0)
		ret[ret_len - 1] = '0';
	ft_put_num(num, flag, &ret, ret_len);
	return (ret);
}

void	ft_put_width_num(char **buf, t_flag *flag)
{
	char	*ret;
	int		i;
	int		ret_len;

	i = 0;
	ret_len = flag->width - ft_str_len_num(*buf);
	if (flag->width > ft_str_len_num(*buf))
	{
		if ((ret = (char *)malloc(sizeof(char) * (ret_len + 1))) == NULL)
			return ;
		while (i < ret_len)
		{
			if (flag->zero)
				ret[i++] = '0';
			else
				ret[i++] = ' ';
		}
		ret[i] = '\0';
		*buf = (flag->minus == 0) ? ft_join_buf(ret, *buf) : \
		ft_join_buf(*buf, ret);
	}
}

int		ft_print_int(unsigned long long num, t_flag *flag)
{
	char	*buf;
	int		len;

	if ((buf = ft_init_buf(num, flag)) == NULL)
		return (0);
	if ((flag->type == 'd' || flag->type == 'i') && flag->zero == 0)
		buf = ft_put_neg_mark(buf, num, flag);
	if (flag->type == 'p')
		buf = ft_put_hex_prefix(buf);
	ft_put_width_num(&buf, flag);
	if ((flag->type == 'd' || flag->type == 'i') && flag->zero == 1)
		buf = ft_put_neg_mark(buf, num, flag);
	ft_put_str_num(buf);
	len = ft_str_len_num(buf);
	free(buf);
	return (len);
}
