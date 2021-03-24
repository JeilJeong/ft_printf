#include <stdio.h>

void	ft_x_test(int x)
{
	int		i;

	i = 0;
// ****************** type [x] test **************************
	printf(" ****************** type [x] test **************************\n");
	printf("test[%d]: [%%x]\n", ++i);
	printf(" | ret: %d\n", printf("[%x]", x));
	printf(" | ret: %d\n", ft_printf("[%x]", x));
	printf("\n");
	printf("test[%d]: [%%.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%.x]", x));
	printf(" | ret: %d\n", ft_printf("[%.x]", x));
	printf("\n");
	printf("test[%d]: [%%1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%1x]", x));
	printf(" | ret: %d\n", ft_printf("[%1x]", x));
	printf("\n");
	printf("test[%d]: [%%2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%2x]", x));
	printf(" | ret: %d\n", ft_printf("[%2x]", x));
	printf("\n");
	printf("test[%d]: [%%3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%3x]", x));
	printf(" | ret: %d\n", ft_printf("[%3x]", x));
	printf("\n");
	printf("test[%d]: [%%4x]\n", ++i);
	printf(" | ret: %d\n", printf("[%4x]", x));
	printf(" | ret: %d\n", ft_printf("[%4x]", x));
	printf("\n");
	printf("test[%d]: [%%1.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%1.x]", x));
	printf(" | ret: %d\n", ft_printf("[%1.x]", x));
	printf("\n");
	printf("test[%d]: [%%1.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%1.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%1.0x]", x));
	printf("\n");
	printf("test[%d]: [%%1.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%1.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%1.1x]", x));
	printf("\n");
	printf("test[%d]: [%%1.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%1.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%1.2x]", x));
	printf("\n");
	printf("test[%d]: [%%1.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%1.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%1.3x]", x));
	printf("\n");
	printf("test[%d]: [%%2.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%2.x]", x));
	printf(" | ret: %d\n", ft_printf("[%2.x]", x));
	printf("\n");
	printf("test[%d]: [%%2.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%2.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%2.0x]", x));
	printf("\n");
	printf("test[%d]: [%%2.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%2.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%2.1x]", x));
	printf("\n");
	printf("test[%d]: [%%2.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%2.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%2.2x]", x));
	printf("\n");
	printf("test[%d]: [%%2.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%2.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%2.3x]", x));
	printf("\n");
	printf("test[%d]: [%%3.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%3.x]", x));
	printf(" | ret: %d\n", ft_printf("[%3.x]", x));
	printf("\n");
	printf("test[%d]: [%%3.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%3.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%3.0x]", x));
	printf("\n");
	printf("test[%d]: [%%3.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%3.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%3.1x]", x));
	printf("\n");
	printf("test[%d]: [%%3.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%3.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%3.2x]", x));
	printf("\n");
	printf("test[%d]: [%%3.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%3.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%3.3x]", x));
	printf("\n");
	printf("test[%d]: [%%4.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%4.x]", x));
	printf(" | ret: %d\n", ft_printf("[%4.x]", x));
	printf("\n");
	printf("test[%d]: [%%4.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%4.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%4.1x]", x));
	printf("\n");
	printf("test[%d]: [%%4.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%4.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%4.2x]", x));
	printf("\n");
	printf("test[%d]: [%%4.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%4.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%4.3x]", x));
	printf("\n");
	printf("test[%d]: [%%0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%0x]", x));
	printf(" | ret: %d\n", ft_printf("[%0x]", x));
	printf("\n");
	printf("test[%d]: [%%0.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%0.x]", x));
	printf(" | ret: %d\n", ft_printf("[%0.x]", x));
	printf("\n");
	printf("test[%d]: [%%0.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%0.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%0.0x]", x));
	printf("\n");
	printf("test[%d]: [%%0.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%0.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%0.1x]", x));
	printf("\n");
	printf("test[%d]: [%%0.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%0.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%0.2x]", x));
	printf("\n");
	printf("test[%d]: [%%0.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%0.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%0.3x]", x));
	printf("\n");
	printf("test[%d]: [%%01x]\n", ++i);
	printf(" | ret: %d\n", printf("[%01x]", x));
	printf(" | ret: %d\n", ft_printf("[%01x]", x));
	printf("\n");
	printf("test[%d]: [%%02x]\n", ++i);
	printf(" | ret: %d\n", printf("[%02x]", x));
	printf(" | ret: %d\n", ft_printf("[%02x]", x));
	printf("\n");
	printf("test[%d]: [%%03x]\n", ++i);
	printf(" | ret: %d\n", printf("[%03x]", x));
	printf(" | ret: %d\n", ft_printf("[%03x]", x));
	printf("\n");
	printf("test[%d]: [%%04x]\n", ++i);
	printf(" | ret: %d\n", printf("[%04x]", x));
	printf(" | ret: %d\n", ft_printf("[%04x]", x));
	printf("\n");
	printf("test[%d]: [%%01.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%01.x]", x));
	printf(" | ret: %d\n", ft_printf("[%01.x]", x));
	printf("\n");
	printf("test[%d]: [%%01.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%01.x]", x));
	printf(" | ret: %d\n", ft_printf("[%01.x]", x));
	printf("\n");
	printf("test[%d]: [%%01.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%01.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%01.1x]", x));
	printf("\n");
	printf("test[%d]: [%%01.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%01.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%01.2x]", x));
	printf("\n");
	printf("test[%d]: [%%01.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%01.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%01.3x]", x));
	printf("\n");
	printf("test[%d]: [%%02.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%02.x]", x));
	printf(" | ret: %d\n", ft_printf("[%02.x]", x));
	printf("\n");
	printf("test[%d]: [%%02.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%02.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%02.0x]", x));
	printf("\n");
	printf("test[%d]: [%%02.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%02.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%02.1x]", x));
	printf("\n");
	printf("test[%d]: [%%02.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%02.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%02.2x]", x));
	printf("\n");
	printf("test[%d]: [%%02.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%02.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%02.3x]", x));
	printf("\n");
	printf("test[%d]: [%%03.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%03.x]", x));
	printf(" | ret: %d\n", ft_printf("[%03.x]", x));
	printf("\n");
	printf("test[%d]: [%%03.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%03.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%03.0x]", x));
	printf("\n");
	printf("test[%d]: [%%03.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%03.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%03.1x]", x));
	printf("\n");
	printf("test[%d]: [%%03.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%03.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%03.2x]", x));
	printf("\n");
	printf("test[%d]: [%%03.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%03.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%03.3x]", x));
	printf("\n");
	printf("test[%d]: [%%04.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%04.x]", x));
	printf(" | ret: %d\n", ft_printf("[%04.x]", x));
	printf("\n");
	printf("test[%d]: [%%04.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%04.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%04.0x]", x));
	printf("\n");
	printf("test[%d]: [%%04.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%04.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%04.1x]", x));
	printf("\n");
	printf("test[%d]: [%%04.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%04.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%04.2x]", x));
	printf("\n");
	printf("test[%d]: [%%04.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%04.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%04.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-x]", x));
	printf(" | ret: %d\n", ft_printf("[%-x]", x));
	printf("\n");
	printf("test[%d]: [%%-.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-.x]", x));
	printf("\n");
	printf("test[%d]: [%%-1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-1x]", x));
	printf("\n");
	printf("test[%d]: [%%-2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-2x]", x));
	printf("\n");
	printf("test[%d]: [%%-3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-3x]", x));
	printf("\n");
	printf("test[%d]: [%%-4x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-4x]", x));
	printf(" | ret: %d\n", ft_printf("[%-4x]", x));
	printf("\n");
	printf("test[%d]: [%%-1.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-1.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-1.x]", x));
	printf("\n");
	printf("test[%d]: [%%-1.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-1.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%-1.0x]", x));
	printf("\n");
	printf("test[%d]: [%%-1.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-1.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-1.1x]", x));
	printf("\n");
	printf("test[%d]: [%%-1.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-1.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-1.2x]", x));
	printf("\n");
	printf("test[%d]: [%%-1.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-1.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-1.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-2.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-2.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-2.x]", x));
	printf("\n");
	printf("test[%d]: [%%-2.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-2.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%-2.0x]", x));
	printf("\n");
	printf("test[%d]: [%%-2.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-2.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-2.1x]", x));
	printf("\n");
	printf("test[%d]: [%%-2.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-2.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-2.2x]", x));
	printf("\n");
	printf("test[%d]: [%%-2.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-2.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-2.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-3.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-3.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-3.x]", x));
	printf("\n");
	printf("test[%d]: [%%-3.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-3.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%-3.0x]", x));
	printf("\n");
	printf("test[%d]: [%%-3.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-3.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-3.1x]", x));
	printf("\n");
	printf("test[%d]: [%%-3.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-3.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-3.2x]", x));
	printf("\n");
	printf("test[%d]: [%%-3.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-3.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-3.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-4.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-4.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-4.x]", x));
	printf("\n");
	printf("test[%d]: [%%-4.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-4.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%-4.0x]", x));
	printf("\n");
	printf("test[%d]: [%%-4.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-4.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-4.1x]", x));
	printf("\n");
	printf("test[%d]: [%%-4.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-4.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-4.2x]", x));
	printf("\n");
	printf("test[%d]: [%%-4.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-4.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-4.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-0x]", x));
	printf(" | ret: %d\n", ft_printf("[%-0x]", x));
	printf("\n");
	printf("test[%d]: [%%-0.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-0.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-0.x]", x));
	printf("\n");
	printf("test[%d]: [%%-0.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-0.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-0.1x]", x));
	printf("\n");
	printf("test[%d]: [%%-0.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-0.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-0.2x]", x));
	printf("\n");
	printf("test[%d]: [%%-0.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-0.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-0.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-01x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-01x]", x));
	printf(" | ret: %d\n", ft_printf("[%-01x]", x));
	printf("\n");
	printf("test[%d]: [%%-02x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-02x]", x));
	printf(" | ret: %d\n", ft_printf("[%-02x]", x));
	printf("\n");
	printf("test[%d]: [%%-03x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-03x]", x));
	printf(" | ret: %d\n", ft_printf("[%-03x]", x));
	printf("\n");
	printf("test[%d]: [%%-04x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-04x]", x));
	printf(" | ret: %d\n", ft_printf("[%-04x]", x));
	printf("\n");
	printf("test[%d]: [%%-01.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-01.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-01.x]", x));
	printf("\n");
	printf("test[%d]: [%%-01.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-01.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%-01.0x]", x));
	printf("\n");
	printf("test[%d]: [%%-01.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-01.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-01.1x]", x));
	printf("\n");
	printf("test[%d]: [%%-01.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-01.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-01.2x]", x));
	printf("\n");
	printf("test[%d]: [%%-01.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-01.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-01.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-01.4x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-01.4x]", x));
	printf(" | ret: %d\n", ft_printf("[%-01.4x]", x));
	printf("\n");
	printf("test[%d]: [%%-02.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-02.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-02.x]", x));
	printf("\n");
	printf("test[%d]: [%%-02.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-02.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%-02.0x]", x));
	printf("\n");
	printf("test[%d]: [%%-02.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-02.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-02.1x]", x));
	printf("\n");
	printf("test[%d]: [%%-02.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-02.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-02.2x]", x));
	printf("\n");
	printf("test[%d]: [%%-02.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-02.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-02.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-02.4x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-02.4x]", x));
	printf(" | ret: %d\n", ft_printf("[%-02.4x]", x));
	printf("\n");
	printf("test[%d]: [%%-03.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-03.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-03.x]", x));
	printf("\n");
	printf("test[%d]: [%%-03.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-03.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%-03.0x]", x));
	printf("\n");
	printf("test[%d]: [%%-03.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-03.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-03.1x]", x));
	printf("\n");
	printf("test[%d]: [%%-03.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-03.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-03.2x]", x));
	printf("\n");
	printf("test[%d]: [%%-03.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-03.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-03.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-03.4x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-03.4x]", x));
	printf(" | ret: %d\n", ft_printf("[%-03.4x]", x));
	printf("\n");
	printf("test[%d]: [%%-04.x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-04.x]", x));
	printf(" | ret: %d\n", ft_printf("[%-04.x]", x));
	printf("\n");
	printf("test[%d]: [%%-04.0x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-04.0x]", x));
	printf(" | ret: %d\n", ft_printf("[%-04.0x]", x));
	printf("\n");
	printf("test[%d]: [%%-04.1x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-04.1x]", x));
	printf(" | ret: %d\n", ft_printf("[%-04.1x]", x));
	printf("\n");
	printf("test[%d]: [%%-04.2x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-04.2x]", x));
	printf(" | ret: %d\n", ft_printf("[%-04.2x]", x));
	printf("\n");
	printf("test[%d]: [%%-04.3x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-04.3x]", x));
	printf(" | ret: %d\n", ft_printf("[%-04.3x]", x));
	printf("\n");
	printf("test[%d]: [%%-04.4x]\n", ++i);
	printf(" | ret: %d\n", printf("[%-04.4x]", x));
	printf(" | ret: %d\n", ft_printf("[%-04.4x]", x));
	printf("\n");
}
