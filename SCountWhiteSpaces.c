/* Accept string from user and count number of white spaces from it
	Input: aBc 4ft  jut  rt
	Output:	5												*/
	
#include<stdio.h>

int Count(char *p)
{
	int i=0;
	
	while(*p!='\0')
	{
		if(*p==' ')
		{
			i++;
		}
		p++;
	}
	return i;
}

int main()
{
	char Arr[30];
	
	int iRet=0;
	
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	iRet=Count(Arr);
	
	printf("Number of white spaces are %d",iRet);
	
	printf("\n");

	return 0;
}
