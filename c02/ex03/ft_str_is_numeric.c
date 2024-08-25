int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 48 || str[index] > 57)
			return (0);
		index++;
	}
	return (1);
}
