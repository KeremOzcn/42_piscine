void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tut;

	tut = *a;
	*a /= *b;
	*b = tut % *b;
}
