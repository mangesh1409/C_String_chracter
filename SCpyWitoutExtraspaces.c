/* Accept string from user and copy contens of that string into another string without any extra white spaces
		Input:     India      is my       country
		Output:	India is my country												*/

#include<stdio.h>

void CpyStr(char *src, char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}
				
	while(*src!='\0')
	{
		if(*src==' ')
		{
			while(*src==' ')
			{
				src++;
			}
		}
		
		while((*src!=' ')&&(*src!='\0'))
		{
			*dest=*src;
			src++;
			dest++;
		}
		
		*dest=' ';
		dest++;
	}
	
	*dest='\0';
}

int main()
{
	char arr[50]={'\0'};
	char brr[50]={'\0'};
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	CpyStr(arr,brr);
	
	printf("New string is\n");
	printf("%s",brr);
	
	printf("\n");
	
	return 0;
}
