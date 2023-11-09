

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while ((str[i] >= 'A' && str[i] <= 'Z'))
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}

/*
#include<stdio.h>

int main(int ac, char **ag)
{
	printf("%d", ft_str_is_uppercase(ag[1]));
}
*/
