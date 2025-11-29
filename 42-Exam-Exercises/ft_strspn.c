#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t j = 0;
	int check;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if(s[i] == accept[j])
			{
				check = 1;
			}
			j++;
		}
		if(check == 0)
		{
			return i;
		}
		i++;
	}
	return i;
}

int main()
{
	printf("%zu\n", ft_strspn("programming", "pro"));
}