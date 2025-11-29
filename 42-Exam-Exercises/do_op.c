#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int n1 = atoi(av[1]);
	int n2 = atoi(av[3]);
	int result = 0;

	if(av[2][0] == '+'){
		result = n1 + n2;
		printf("%d", result);
	}
	else if (av[2][0] == '-')
	{
		result = n1 - n2;
		printf("%d", result);
	}
	else if(av[2][0] == '*'){
		result = n1 * n2;
		printf("%d", result);
	}
	else if (av[2][0] == '/')
	{
		result = n1 / n2;
		printf("%d", result);
	}
	printf("\n");
}