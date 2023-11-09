
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*
int main(void)
{
	int i;
	i = 5;
	char s1[128] = "123456";
	char s2[128] = "123556";
	printf("%d\n", ft_strncmp(s1, s2, i));
	printf("%d", strncmp(s1, s2, i));
}
*/
