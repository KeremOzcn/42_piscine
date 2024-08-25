int	ft_sqrt(int nb)
{
	int	tut;
	int	cikar;

	if (nb < 0)
		return (0);
	tut = 0;
	cikar = 1;
	while (nb > 0)
	{
		nb -= cikar;
		cikar += 2;
		tut++;
	}
	if (nb == 0)
		return (tut);
	else
		return (0);
}
