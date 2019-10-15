/* Accept two character from user and swap them */

#include<stdio.h>

void Swap(char *p, char *q)
{
	char temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}

int main()
{
	char c1,c2;
	
	printf("Enter 2 character: ");
	scanf("%c %c",&c1,&c2);
	
	printf("Before swapping: %c  %c",c1,c2);
	printf("\n");
	Swap(&c1, &c2);
	printf("After swapping: %c  %c",c1,c2);
	printf("\n");
	return 0;
}
