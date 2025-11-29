#include "unistd.h"

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char a_z[26] = "abcdefghijklmnopqrstuvwxyz";
	char z_a[26] = "zyxwvutsrqponmlkjihgfedcba";
	char A_Z[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Z_A[26] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	if (ac == 2)
	{
		while (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			j = 0;
			while (a_z[j])
			{
				if (av[1][i] == a_z[j])
				{
					av[1][i] = z_a[j];
					break;
				}
				else if (av[1][i] == z_a[j])
				{
					av[1][i] = a_z[j];
					break;
				}
				j++;
			}
			write(1, &av[1][i], 1);
			i++;
		}
		while (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			j = 0;
			while (A_Z[j])
			{
				if (av[1][i] == A_Z[j])
				{
					av[1][i] = Z_A[j];
					break;
				}
				else if (av[1][i] == Z_A[j])
				{
					av[1][i] = A_Z[j];
					break;
				}
				j++;
			}
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
