#include <unistd.h>

void	yaz(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		yaz('-');
		yaz('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		yaz('-');
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	yaz((nb % 10) + '0');
}
