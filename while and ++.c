//Assignment: Write program(s) using while loops and the ++ and -- operators to output the following sequences:
// 1 2 3 4 5  1 2 3 4
//1 2 3 4 5  4 3 2 1

#include <stdio.h>
int main(void)
{
	int i= 0;
	while (i<5)
		printf("%d ", ++i); //prints 1-5 with a space after each integer
	
	i= 1;
	while (i<5)
		printf(" %d", i++); //prints 1-4 with a space before each integer
	
	printf("\n"); //line break
	
	i= 0;
	while (i<5)
		printf("%d ", ++i); //prints 1-5 with a space after each integer
		
	while (i>1)
		printf(" %d", --i);
	
	printf("\n");
	
	return 0;
}

//Output:
//1 2 3 4 5  1 2 3 4
//1 2 3 4 5  4 3 2 1
//
//--------------------------------
//Process exited after 0.008468 seconds with return value 0
//Press any key to continue . . .
