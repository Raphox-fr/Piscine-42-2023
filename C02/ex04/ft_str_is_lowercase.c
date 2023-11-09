

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while ((str[i] >= 'a' && str[i] <= 'z'))
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
	printf("%d", ft_str_is_lowercase(ag[1]));
}
*/
