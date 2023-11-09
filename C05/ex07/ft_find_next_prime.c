
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= (nb / i))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while ((ft_is_prime(nb)) == 0)
		nb++;
	return (nb);
}

/*
#include <stdio.h>
int main()
{
	printf("%i", ft_find_next_prime(25));
}
*/
