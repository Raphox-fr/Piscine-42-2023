

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (i);
}

/*
#include<stdio.h>
int main(void)
{
	printf("%d", ft_recursive_power(5, 5));
}
*/
