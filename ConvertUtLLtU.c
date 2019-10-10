/* Accept character from user. If it is lower case then display it's corresponding upper case character.
	If it is upper case then display it's corresponding lower case character. In other case display as it is
	
	Input:	a	B	*	
	Output: A	b	*										*/
	
#include<stdio.h>

void Display(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		ch=ch-32;;
		printf("%c",ch);
	}
	else if((ch>='A')&&(ch<='Z'))
	{
		ch=ch+32;
		printf("%c",ch);
	}
	else
	{
		printf("%c",ch);
	}
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
