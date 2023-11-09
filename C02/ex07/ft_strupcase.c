

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
#include<stdio.h>

int main(int ac, char **ag)
{
	printf("%s",ft_strupcase(ag[1]));
}
*/