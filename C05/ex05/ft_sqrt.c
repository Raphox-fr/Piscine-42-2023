

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i < nb)
	{
		if (i > 46340)
			return (0);
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}

/*
#include <math.h>
#include<stdio.h>
int	main(void)
{
	int i;
	i = 16;
	printf("%d", ft_sqrt(16));	
}
*/
