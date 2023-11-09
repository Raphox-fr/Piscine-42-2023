

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (((str[i] >= 32 && str[i] <= 47)
				|| (str[i] >= 58 && str[i] <= 64)
				|| (str[i] >= 91 && str[i] <= 96)
				|| (str[i] >= 123)) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
				str[i + 1] = str[i + 1] - 32;
		}
			i++;
	}
	return (str);
}

/*
#include<stdio.h>

int	main(int ac, char **ag)
{
	printf("%s", ft_strcapitalize(ag[1]));
}
*/