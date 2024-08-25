#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	say;

	say = 97;
	while (say < 123)
	{
		write(1, &say, 1);
		say++;
	}
}
