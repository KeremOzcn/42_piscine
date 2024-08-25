#include <unistd.h>

int	main(int as, char **ai)
{
	int	index;

	index = 0;
	if (as > 0)
	{
		while (ai[0][index])
		{
			write(1, &ai[0][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
