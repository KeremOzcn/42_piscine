int	ft_iterative_factorial(int nb)
{
	int	toplam;

	toplam = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		toplam *= nb;
		nb--;
	}
	return (toplam);
}
