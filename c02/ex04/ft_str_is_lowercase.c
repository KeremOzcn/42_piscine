int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 'z' || str[index] < 'a')
			return (0);
		index++;
	}
	return (1);
}
