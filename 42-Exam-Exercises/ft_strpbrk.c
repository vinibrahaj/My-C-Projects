#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	char *result = (char *) s1;
	if(!s2)
		return NULL;
	while (s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
				return result;
			j++;
		}
		i++;
		result++;
	}
	return (NULL);
}