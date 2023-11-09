

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	if (nb == 0)
		return (dest);
	while (i < nb && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
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
	int i;
	i = 2;
	
	char s1[128] = "bon";
	char s2[128] = "";
	
	printf("%s\n", ft_strncat(s1, s2, i));
	printf("%s", strncat(s1, s2, i));
}
*/