/* Accept string from user and check whether that string is palindrome or not
	Input:	abcba	1234461
	Outpu:	TRUE	FALSE								*/
	
#include<stdio.h>

#define TRUE	1
#define FALSE	0

typedef int BOOL;

BOOL ChkPalindrome(char * p)
{
	char *iStart=p;
	char *iEnd=p;
	
	while(*p!='\0')
	{
		p++;
		iEnd++;
	}
	
	iEnd--;
	
	while(iStart<=iEnd)
	{
		if(*iStart!=*iEnd)
		{
			break;
		}
		iStart++;
		iEnd--;
	}
	
	if(iStart>iEnd)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char Arr[30];
	BOOL bRet=FALSE;
	
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	bRet=ChkPalindrome(Arr);
	
	if(bRet==TRUE)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
	}
	
	printf("\n");
	
	return 0;
}	
		
