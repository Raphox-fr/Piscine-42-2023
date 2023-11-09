
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	nb = nb * (ft_recursive_factorial(nb - 1));
	return (nb);
}

/*
#include<stdio.h>

int main(void)
{
	printf("%d", ft_recursive_factorial(5));
}
*/
