#include <stdio.h>
int main()
{
	unsigned long n = 4294967296999999999;
	int times = 0;

	while (n != 0)
	{
		printf(">>>%ld----->%ld\ntimes: %d\n", n, n % 10, times);
		times += 1;
		n = n / 10;
	}
	return(0);
}
