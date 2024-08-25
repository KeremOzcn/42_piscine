#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	alf;

	alf = 122;
	while (alf >= 97)
	{
		write(1, &alf, 1);
		alf--;
	}
}
