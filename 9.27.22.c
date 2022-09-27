#include <stdio.h>
int main(void)
{
	int i = 0;
	
	for (i=1; i<=5; i++)
		printf("%d * 8 = %d\n", i, i*8);
		
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
//Process exited after 0.9691 seconds with return value 0
//Press any key to continue . . .
