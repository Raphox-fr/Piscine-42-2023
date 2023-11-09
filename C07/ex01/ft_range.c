

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	minmax;
	int	*tab;

	i = 0;
	minmax = max - min;
	tab = malloc((sizeof(int)) * minmax);
	if (min >= max)
		return (0);
	if (tab == 0)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*
#include<stdio.h>
int main()
{
	printf("%ls", ft_range(0, 5));
}
*/
