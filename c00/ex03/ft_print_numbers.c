#include <unistd.h>

void	ft_puthcar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	nmr;

	nmr = 48;
	while (nmr <= 57)
	{
		write(1, &nmr, 1);
		nmr++;
	}
}
