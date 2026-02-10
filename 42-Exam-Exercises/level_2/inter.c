#include <unistd.h>

int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		int seen[128] = {};
		while(av[1][i])
		{
			j = 0;
			while(av[2][j])
			{
				if(av[1][i] == av[2][j] && !seen[(int)av[1][i]])
				{
					seen[(int)av[1][i]] = 1;
					write(1, &av[1][i], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

// 1.the character that will be displayed, must be in both strings
// 2.if the character is double in the first string it will be displayed once