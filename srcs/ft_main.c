/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:02:18 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/23 16:10:38 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_main.h"

int	main(void)
{
	char		c = 'c';
	char		*str = "test" ;
	int		n = 3;
	char		*ptr = &c;
	unsigned int	u = 3;

// ****************** type [c] test **************************
	printf(" ****************** type [c] test **************************\n");
	printf("test: [%%c]\n");
	printf(" | ret: %d\n", printf("[%c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%c]", c));
	printf("\n");
	printf("test: [%%-c]");
	printf(" | ret: %d\n", printf("[%-c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-c]", c));
	printf("\n");
	printf("test: [%%-0c]");
	printf(" | ret: %d\n", printf("[%-0c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-0c]", c));
	printf("\n");
	printf("test: [%%-1c]");
	printf(" | ret: %d\n", printf("[%-1c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-1c]", c));
	printf("\n");
	printf("test: [%%-2c]");
	printf(" | ret: %d\n", printf("[%-2c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-2c]", c));
	printf("\n");
	printf("test: [%%-3c]");
	printf(" | ret: %d\n", printf("[%-3c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-3c]", c));
	printf("\n");
	printf("test: [%%-0.c]");
	printf(" | ret: %d\n", printf("[%-0.c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-0.c]", c));
	printf("\n");
	printf("test: [%%-.c]");
	printf(" | ret: %d\n", printf("[%-.c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-.c]", c));
	printf("\n");
	printf("test: [%%0.c]");
	printf(" | ret: %d\n", printf("[%0.c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%0.c]", c));
	printf("\n");
	printf("test: [%%0.1c]");
	printf(" | ret: %d\n", printf("[%0.1c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%0.1c]", c));
	printf("\n");
	printf("test: [%%0.2c]");
	printf(" | ret: %d\n", printf("[%0.2c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%0.2c]", c));
	printf("\n");
	printf("test: [%%0.3c]");
	printf(" | ret: %d\n", printf("[%0.3c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%0.3c]", c));
	printf("\n");
	printf("test: [%%1.c]");
	printf(" | ret: %d\n", printf("[%1.c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%1.c]", c));
	printf("\n");
	printf("test: [%%2.c]");
	printf(" | ret: %d\n", printf("[%2.c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%2.c]", c));
	printf("\n");
	printf("test: [%%3.0c]");
	printf(" | ret: %d\n", printf("[%3.0c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%3.0c]", c));
	printf("\n");
	printf("test: [%%01c]");
	printf(" | ret: %d\n", printf("[%01c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%01c]", c));
	printf("\n");
	printf("test: [%%02c]");
	printf(" | ret: %d\n", printf("[%02c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%02c]", c));
	printf("\n");
	printf("test: [%%03c]");
	printf(" | ret: %d\n", printf("[%03c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%03c]", c));
	printf("\n");
	printf("test: [%%3.0c]");
	printf(" | ret: %d\n", printf("[%3.0c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%3.0c]", c));
	printf("\n");
	printf("test: [%%3.1c]");
	printf(" | ret: %d\n", printf("[%3.1c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%3.1c]", c));
	printf("\n");
	printf("test: [%%3.2c]");
	printf(" | ret: %d\n", printf("[%3.2c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%3.3c]", c));
	printf("\n");
	printf("test: [%%3.3c]");
	printf(" | ret: %d\n", printf("[%3.3c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%3.3c]", c));
	printf("\n");
	printf("test: [%%3.4c]");
	printf(" | ret: %d\n", printf("[%3.4c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%3.4c]", c));
	printf("\n");
	printf("test: [%%-03.1c]");
	printf(" | ret: %d\n", printf("[%-03.1c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-03.1c]", c));
	printf("\n");
	printf("test: [%%-03.2c]");
	printf(" | ret: %d\n", printf("[%-03.2c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-03.2c]", c));
	printf("\n");
	printf("test: [%%-03.3c]");
	printf(" | ret: %d\n", printf("[%-03.3c]", c));
	ft_printf(" | ret: %d\n", ft_printf("[%-03.3c]", c));
	printf("\n");
	printf("test: [%%-*.3c]");
	printf(" | ret: %d\n", printf("[%-*.3c]", 3, c));
	ft_printf(" | ret: %d\n", ft_printf("[%-*.3c]", 3, c));
	printf("\n");
	printf("test: [%%0*.*c]");
	printf(" | ret: %d\n", printf("[%0*.*c]", 3, 1, c));
	ft_printf(" | ret: %d\n", ft_printf("[%0*.*c]", 3, 1, c));
	printf("\n");
// ****************** type [s] test **************************
// ****************** type [p] test **************************
// ****************** type [d] test **************************
// ****************** type [u] test **************************
// ****************** type [i] test **************************
// ****************** type [x] test **************************
// ****************** type [X] test **************************
// ****************** type [%] test **************************
}
