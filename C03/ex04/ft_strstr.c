

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	char s1[] = "sahswjkgdhwjbfwhfeCAhfjkrehlfnj";
	char s2[] = "CA";
	char *res = ft_strstr(s1, s2);

	printf("%s", res);
	printf("%s", strstr(s1, s2));
}
*/