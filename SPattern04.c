/*  Accept string from user and print below pattern
	Input:	InDia
	Output:	I N D I A
		I N D I A
		I N D I A
		I N D I A
		I N D I A			*/
	
#include<stdio.h>

void Pattern(char *p)
{
	char *temp=p;
	char *q=NULL;
	
	while(*p!='\0')
	{
		q=temp;
		
		while(*q!='\0')
		{
			if((*q>='a')&&(*q<='z'))
			{
				printf("%c ",*q-32);
			}
			else
			{
				printf("%c ",*q);
			}
			q++;
		}
		
		printf("\n");
		p++;
	}
}

int main()
{
	char arr[50]={'\0'};
	
	int iRet=0;
	
	printf("Enter string: ");
	scanf("%[^'\n']s",arr);
	
	Pattern(arr);
	
	printf("\n");
	
	return 0;
}
