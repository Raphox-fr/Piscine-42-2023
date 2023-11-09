
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_string(int size, char **strs, char *sep)
{
	int	i;
	int	taille;
	int	countsep;

	i = 0;
	taille = 0;
	countsep = ft_strlen(sep);
	while (i < size)
	{
		taille = taille + ft_strlen(strs[i]);
		i++;
	}
	taille = taille + (countsep * (size - 1));
	return (taille);
}

char	*real_bruv(int size, char *tab, char **strs, char *sep)
{
	int	i;
	int	j;
	int	countall;

	i = 0;
	j = 0;
	countall = 0;
	while (j < size)
	{
		while (strs[j][i])
			tab[countall++] = strs[j][i++];
		j++;
		if (j == size)
		{
			tab[countall] = '\0';
			return (tab);
		}
		i = 0;
		while (sep[i])
			tab[countall++] = sep[i++];
		i = 0;
	}
	tab[countall] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		countall;
	char	*anh;

	if (size == 0)
	{
		anh = malloc(1);
		*anh = '\0';
		return (anh);
	}
	countall = ft_count_string(size, strs, sep);
	tab = malloc((sizeof(char)) * (countall + 1));
	if ((real_bruv(size, tab, strs, sep)) == tab)
		return (tab);
	return (tab);
}

/*
int main()
{
	char *strs[] = {"youpi", "salut  ca va", "", "", "tes un bg mon pote"};
	printf("%s\n", ft_strjoin(5, strs, "///"));
}
*/