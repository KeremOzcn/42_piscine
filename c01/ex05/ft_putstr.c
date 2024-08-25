#include <unistd.h>

void	charyaz(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		charyaz(str[index]);
		index++;
	}
}
