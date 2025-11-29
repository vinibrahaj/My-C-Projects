#include <stdio.h>
char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while(str[len])
	len++;

	char tmp_array[len];
	while(0 < len)
	{
		tmp_array[i] = str[i];
		i++;
		len--;
	}
	while(0 < i--)
	{
		str[j] = tmp_array[i];
		j++;
	}
	return (str);
}

int main()
{
	/*char test[] = "AAAAAAAAAAAAAAAAAAAA";
	ft_strrev(test);
	printf("%s\n", test);*/
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "WORLD";
	ft_strrev(a);
	ft_strrev(b);
	printf("%s %s\n", a, b);

}
