/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_num_sub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:48:46 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/30 18:40:05 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_num_len(unsigned long long num, t_flag *flag)
{
	int					i;
	unsigned long long	base;

	i = 1;
	base = (unsigned long long)ft_num_base(flag);
	num = ft_sign_change(num, flag);
	while (num >= base)
	{
		i++;
		num /= base;
	}
	return (i);
}

void	ft_put_num(char *buf, int len, unsigned long long num, t_flag *flag)
{
	unsigned long long	base;
	int					i;

	base = (unsigned long long)ft_num_base(flag);
	num = ft_sign_change(num, flag);
	if (num >= base)
		ft_put_num(buf, len, num / base, flag);
	i = 0;
	while (buf[i] != '\0' && i < len)
		i++;
	if (base == 10)
		buf[i] = (num % base) + '0';
	else if (flag->type == 'x' || flag->type == 'p')
		buf[i] = "0123456789abcdef"[num % base];
	else if (flag->type == 'X')
		buf[i] = "0123456789ABCDEF"[num % base];
}

char	*ft_init_buf(unsigned long long num, t_flag *flag)
{
	char	*buf;
	int		buf_len;
	int		num_len;
	int		i;

	num_len = ft_num_len(num, flag);
	buf_len = (num_len > flag->dot) ? num_len : flag->dot;
	if (num == 0 && flag->dot == 0)
		buf_len = 0;
	if ((buf = (char *)malloc(sizeof(char) * (buf_len + 1))) == NULL)
		return (NULL);
	ft_memset(buf, 0, sizeof(buf));
	buf[buf_len] = '\0';
	i = 0;
	while (num_len + i < buf_len)
		buf[i++] = '0';
	if (!(num == 0 && flag->dot == 0))
		ft_put_num(buf, buf_len, num, flag);
	return (buf);
}

int		ft_put_str_num(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

char	*ft_create_width_buf(int len, unsigned long long num, t_flag *flag)
{
	int		i;
	char	*buf;
	int		n;

	i = 0;
	n = (int)num;
	if ((flag->type == 'd' || flag->type == 'i') && (n < 0))
		len -= 1;
	if ((buf = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	ft_memset(buf, 0, sizeof(buf));
	while (i < len)
	{
		if (flag->zero)
			buf[i] = '0';
		else
			buf[i] = ' ';
		i++;
	}
	return (buf);
}
