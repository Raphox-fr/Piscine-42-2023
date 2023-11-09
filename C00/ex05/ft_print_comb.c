
#include<unistd.h>

void	ft_putchar(char c, char e, char k)
{
	write(1, &c, 1);
	write(1, &e, 1);
	write(1, &k, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar (a + '0', b + '0', c + '0');
				if (a != 7)
					write(1, ", ", 2);
				c++;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}
