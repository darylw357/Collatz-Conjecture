/*Collatz-Conjecture */

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int x = 0;
	int n = 27;
	int count = 0;
	
	printf("Starting value %d\n", n);
	
	while(n != 1)
	{
		if(n % 2 == 1)
			{
				n = (3 * n) + 1;
			}
		else if(n % 2 == 0)
			{
				n = n / 2;
			}
		printf("%d\n", n);
		count ++;
	}
	printf("%d iterations\n", count);
	
	getchar();
}

