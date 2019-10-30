/* Accept string from user and count number of words in that string
		Input:	India is my   country
		Output:	4														*/

#include<stdio.h>

int Count(char *p)
{
	int i=0;
	
	if(p==NULL)
	{
		return -1;
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
		//if((*p!=' ')&&(*p!='\0'))
		{
			while((*p!=' ')&&(*p!='\0'))
			{
				p++;
			}
			i++;
		}
	}
	return i;
}

int main()
{
	char arr[50]={'\0'};
	
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=Count(arr);
	
	printf("Number of words in given string is %d",iRet);
	
	printf("\n");
	
	return 0;
}
