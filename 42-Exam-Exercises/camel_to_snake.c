#include <unistd.h>

int is_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		for (int i = 0; av[1][i]; i++)
		{
			if (is_upper(av[1][i]))
			{
				write(1, "_", 1);
				av[1][i] += 32;
			}
			write(1, &av[1][i], 1);
		}
		write(1, "\n", 1);
	}
	else{
		write(1, "\n", 1);
	}
}