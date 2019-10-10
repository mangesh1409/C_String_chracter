/* Accept character from user. If it is capital then disply all character from the input character till 'Z'.
	If it is small then disply all character from the input character till 'z'.
	In other case display nothing
	
	Input:	m
	Output:	m n o p q r s t u v w x y z
	Input:	T
	Output:	T U V W X Y Z
	Input:	9
	Output:												*/
	
#include<stdio.h>
	
void Display(char ch)
{
	int i=0;
	
	if((ch>='a')&&(ch<='z'))
	{
		for(i=ch;i<='z';i++)
		{
			printf("%c ",i);	
		}
	}
	else if((ch>='A')&&(ch<='Z'))
	{
		for(i=ch;i<='Z';i++)
		{
			printf("%c ",i);	
		}
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
