/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:30:31 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/20 12:12:42 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_parse_format(const char *format)
{
	
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	ft_parse_format(format);
}
