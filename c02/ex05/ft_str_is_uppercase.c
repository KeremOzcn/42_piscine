int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 'Z' || str[index] < 'A')
			return (0);
		index++;
	}
	return (1);
}
