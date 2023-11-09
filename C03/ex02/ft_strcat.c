
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main(int ac, char **argv)
{
	char s1[128] = "u";
	char s2[128] = "u";
	
	printf("%s\n", ft_strcat(s1, s2));
	printf("%s", strcat(s1, s2));
}
*/