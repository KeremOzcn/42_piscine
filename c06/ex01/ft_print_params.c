#include <unistd.h>

int	main(int as, char **ai)
{
	int	i1;
	int	i2;

	if (as < 2)
		return (0);
	i1 = 1;
	while (i1 < as)
	{
		i2 = 0;
		while (ai[i1][i2])
		{
			write(1, &ai[i1][i2], 1);
			i2++;
		}
		write(1, "\n", 1);
		i1++;
	}
	return (0);
}
