#include<stdio.h>

void Display(char Ch)
{
	switch(Ch)
	{
		case 'A'	:	printf("Your exam is at 7 Am");
						break;
		case 'B'	:	printf("Your exam is at 8.30 Am");
						break;
		case 'C'	:	printf("Your exam is at 10 Am");
						break;
		case 'D'	:	printf("Your exam is at 11.30 Am");
						break;
		default:		printf("Error: Enter valid division");
	}
}

int main()
{
	char ch='\0';
	
	printf("Enter your division: ");
	scanf("%c",&ch);
	
	Display(ch);
	
	printf("\n");
	
	return 0;
}
