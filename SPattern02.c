/*  Accept string from user and print below pattern
	Input:	India
	Output:	I n d i a
		I n d i
		I n d
		I n
		I			*/
	

#include<stdio.h>

void Pattern(char *p)
{
	char *temp=p;
	char *start=NULL;
	char *end=p;
	
	while(*end!='\0')
	{
		end++;
	}
	
	while(*p!='\0')
	{
		start=temp;
		
		while(start<end)
		{
			printf("%c ",*start);
			start++;
		}
		printf("\n");
		p++;
		end--;
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
