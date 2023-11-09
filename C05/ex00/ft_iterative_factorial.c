

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (i >= 1)
	{
		nb = nb * (i);
		i--;
	}
	return (nb);
}

/*
#include<stdio.h>

int main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/
