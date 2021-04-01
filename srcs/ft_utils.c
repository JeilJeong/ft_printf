/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:49:01 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/31 20:21:22 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

int		ft_putchar(char c, int fd)
{
	if (fd < 0)
		return (-1);
	return (write(fd, &c, 1));
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (!c)
		return ((char *)&str[i]);
	return (NULL);
}

int		ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_put_str_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
