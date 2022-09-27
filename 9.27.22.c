#include <stdio.h>
#define FACTOR 8
#define MAXIMUM 5
int main(void)
{
	int i;
	
	for (i=1; i<=MAXIMUM; i++)
		printf("%d * %d = %d\n", i, FACTOR, FACTOR*i);
		
	return 0;
	
}

//Output:
//1 * 8 = 8
//2 * 8 = 16
//3 * 8 = 24
//4 * 8 = 32
//5 * 8 = 40
//
//--------------------------------
//Process exited after 0.9433 seconds with return value 0
//Press any key to continue . . .
