/* Accept character from user and dipslay its ASCII value in decimal,octal and hexadecimal format
	Input:	A
	Output:	Decimal		65
		Octal		0101
		Hexadecimal	0x41								*/
				
#include<stdio.h>

void Display(char ch)
{
	printf("Decimal\t\t%d\nOctal\t\t0%o\nHexadecimal\t0x%x",ch,ch,ch);
}

int main()
{
	char ch='\0';

	printf("Enter character ");
	scanf("%c",&ch);
	
	Display(ch);
	
	printf("\n");
	return 0;
}
