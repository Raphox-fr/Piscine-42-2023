

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		countstr;
	char	*dest;

	i = 0;
	countstr = ft_strlen(src);
	dest = malloc((sizeof(char)) * (countstr + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*return_stuff;
	int			i;

	return_stuff = malloc((sizeof(t_stock_str) + 1) * ac);
	if (!return_stuff)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		return_stuff[i].size = ft_strlen(av[i]);
		return_stuff[i].str = (av[i]);
		return_stuff[i].copy = ft_strdup(av[i]);
		i++;
	}
	return_stuff[i].str = 0;
	return (return_stuff);
}

/*
include <stdio.h>
int main (int ac, char **argv)
{
	t_stock_str zbeub = ft_strs_to_tab(ac, argv);
	printf("%d", zbeub[0].size);
}
*/