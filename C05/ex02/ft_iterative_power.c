

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	while (power > 1)
	{
		i = i * nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (i);
}

/*
#include<stdio.h>
int main(void)
{
	printf("%d", ft_iterative_power(5, 0));
}
*/