#include "unistd.h"

void	print_bits(unsigned char octet)
{
	unsigned char binary[8];
	int i = 7;

	while (i >= 0)
	{
		binary[i] = (octet % 2) + '0';
		octet = octet / 2;
		i--;
	}
	write(1, binary, 8);
}

int main()
{
	unsigned char octett = 2;
	print_bits(octett);
}