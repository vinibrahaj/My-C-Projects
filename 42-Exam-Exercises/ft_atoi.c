int ft_isspace(int c)
{
	return ((c >= 9 && c <= 13 ) || c == 32);
}
int ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
int	ft_atoi(const char *str)
{
	int res = 0;
	int i = 0;
	int s = 1;

	while (ft_isspace(str[i]))
	i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			s = -1;
		}
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * s);
}