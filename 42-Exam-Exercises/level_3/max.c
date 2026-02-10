#include "stdio.h"

int max(int* tab, unsigned int len)
{
	int elem = 0;
	int maxx = 0;
	if(len == 0)
		return 0;
	else{
		while (len)
		{
			if(tab[elem] > maxx)
				maxx = tab[elem];
			elem++;
			len--;
		}
		return (maxx);
	}
}

int main()
{
	int int_tab[] = {1, 67, 2, 10, 9};
	printf("%d\n", max(int_tab, 1));
}
