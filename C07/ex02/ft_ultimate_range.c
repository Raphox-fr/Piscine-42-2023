

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	minmax;

	i = 0;
	j = min;
	minmax = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range[0] = malloc((sizeof(int) * minmax));
	if (range[0] == NULL)
		return (-1);
	i = 0;
	while (j < max)
	{
		range[0][i] = j;
		i++;
		j++;
	}
	return (i);
}
/*
#include<stdio.h>
int main ()
{
	int *range;
	
	printf("%d", ft_ultimate_range(&range, 20, 6));
}
*/
