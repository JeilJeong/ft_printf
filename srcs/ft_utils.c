#include "../includes/ft_utils.h"

int	ft_putchar(char c, int fd)
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
