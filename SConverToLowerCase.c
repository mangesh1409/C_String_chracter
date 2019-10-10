/* Accept string from user and convert it into lower case
	Input:	MarVellOUS MulTI
	Output:	marvellous multi					*/
	
#include<stdio.h>

void ConvertLower(char *p)
{
	while(*p!='\0')
	{
		if((*p>='A')&&(*p<='Z'))
		{
			*p=*p+32;
		}
		p++;
	}
}

int main()
{
	char arr[30];
	
	printf("Enter string:");
	scanf("%[^'\n']s",arr);
	
	ConvertLower(arr);
	
	printf("Modified string: %s",arr);
	
	printf("\n");
	
	return 0;
}
	
