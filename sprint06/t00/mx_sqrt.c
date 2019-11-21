#include <stdio.h>
int	mx_sqrt(int x)
{
	int i;

	i = 1;
	if (x > 0)
	{
		while (i * i <= x)
		{
			if (i * i == x)
				return (i);
			else if (i >= 46341)
				return (0);
			i++;
		}
	}
	return (0);
}

