/*  Accept string from user and print below pattern
	Input:	India
	Output:	I
		I n
		I n d 
		I n d i
		I n d i a			*/
				
#include<stdio.h>

void Pattern(char *p)
{
	char *temp=p;
	char *start=NULL;
	char *end=p;
	
	while(*p!='\0')
	{
		end=p+1;
		start=temp;
		
		while(start<end)
		{
			printf("%c ",*start);
			start++;
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
