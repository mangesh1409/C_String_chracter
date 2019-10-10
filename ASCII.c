/* Display ASCII table  */

#include<stdio.h>

void Display()
{
	int i=0;
	
	for(i=0;i<128;i++)
	{
		printf("%c\t%d\t%x\t%o",i,i,i,i);
		printf("\n");
	}
}

int main()
{
	printf("Symbol\tDec\tHex\tOctal\n");
	Display();
	return 0;
}
