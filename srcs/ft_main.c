/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:02:18 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/30 16:30:36 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_main.h"
#include "../includes/ft_test.h"


int	main(void)
{
	char		c = 'c';
	char		*s = "ab" ;
	int		d = -2;
	int		i = 3;
	int		x = -15;
	int		X = -47;
	char		*p = &c;
	unsigned int	u = 3;

	ft_d_test(d);
}
