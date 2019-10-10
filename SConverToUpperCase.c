/* Accept string from user and convert it into Upper case
	Input:	MarVellOUS MulTI
	Output:	MARVELLOUS MULTI				*/
	
#include<stdio.h>

void ConvertUpper(char *p)
{
	while(*p!='\0')
	{
		if((*p>='a')&&(*p<='z'))
		{
			*p=*p-32;
		}
		p++;
	}
}

int main()
{
	char arr[30];
	
	printf("Enter string:");
	scanf("%[^'\n']s",arr);
	
	ConvertUpper(arr);
	
	printf("Modified string: %s",arr);
	
	printf("\n");
	
	return 0;
}
	
