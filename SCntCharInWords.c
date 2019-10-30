/* Accept string from user and return largest size of word in that string
		Input:	India      is my       country
		Output:		7																*/

#include<stdio.h>

int Count(char *p)
{
	int i=0, iMax=0;
	
	if(p==NULL)
	{
		return -1;
	}
	
	while(*p!='\0')
	{
		i=0;
		
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
				i++;
			}
		}
		
		if(iMax<i)
		{
			iMax=i;
		}
	}
	return iMax;
}

int main()
{
	char arr[50]={'\0'};
	
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=Count(arr);
	
	printf("Number of character in largest word are %d",iRet);
	
	printf("\n");
	
	return 0;
}
