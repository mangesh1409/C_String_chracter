/* Accept string from user and make 1st character of each word as capital if it is small letter
	Input:	india Is my country
	Output:	India Is My Country								*/

#include<stdio.h>

void 	ChangeFirst(char *p)
{
	if(p==NULL)
	{
		return;
	}
	
	while(*p!='\0')
	{
		if(*p==' ')
		{
			while(*p==' ')
			{
				p++;
			}
		}
		
		else
		{
			if((*p>='a')&&(*p<='z'))
			{
				*p=*p-32;
			}
			
			while((*p!=' ')&&(*p!='\0'))
			{
				p++;
			}
		}
	}
}
	
int main()
{
	char arr[50]={'\0'};
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	ChangeFirst(arr);
	
	printf("Modified string is\n");
	printf("%s",arr);
	
	printf("\n");
	
	return 0;
}
