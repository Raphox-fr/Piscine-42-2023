

void	ft_putchar(char a);

void	ft_print(int x, int y, int i, int j)
{
	if (i == 0 || i == x - 1)
	{
		if (j == 0 || j == y - 1)
		{
			if (i == 0 && j == 0)
				ft_putchar('A');
			else if (i == x - 1 && j == 0)
				ft_putchar('C');
			else if (i == 0 && j == y -1)
				ft_putchar('C');
			else if (i == x - 1 && j == y -1)
				ft_putchar('A');
		}
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == y - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_print(x, y, i, j);
			i++;
		}
		if (x > 0)
			ft_putchar('\n');
		j++;
	}
}
