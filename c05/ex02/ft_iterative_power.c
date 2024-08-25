int	ft_iterative_power(int nb, int power)
{
	int	tp;

	tp = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		tp *= nb;
		power--;
	}
	return (tp);
}
