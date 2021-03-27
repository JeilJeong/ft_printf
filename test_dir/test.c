#include <stdio.h>

void	ft_putnum(char *buf, unsigned long long num)
{
	int	i;
	int	base;
	
	base = 10;
	if (num >= base)
		ft_putnum(buf, num / 10);
	i = 0;
	while (buf[i] != '\0')
		i++;
	buf[i] = (num % base) + '0';
}

int	main()
{
	char	buf[6];
	int	i;
	unsigned long long num = 123;
	
	buf[0] = '0';
	buf[1] = '0';
	i = 2;
	buf[5] = '\0';
	while (buf[i] != '\0')
		buf[i++] = '\0';
	ft_putnum(&buf, num);
	printf("%s\n", buf);
}
