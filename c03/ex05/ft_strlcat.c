unsigned int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i])
		i++;
	j = 0;
	destlen = i;
	while (src[i] && j + i < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (j < size)
		dest[i + j] = '\0';
	if (size < destlen)
		return (ft_strlen(src) + size);
	return (destlen + ft_strlen(src));
}
