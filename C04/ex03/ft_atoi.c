
int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	countminus;

	result = 0;
	i = 0;
	countminus = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-')
			countminus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (countminus % 2 != 0)
		return (result * -1);
	return (result);
}
/*
#include<stdio.h>
int main()
{
	printf("%d", ft_atoi("014564654"));
}
*/
