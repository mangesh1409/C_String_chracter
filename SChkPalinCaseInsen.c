/* Accept string from user and check whether that string is palindrome or not without considering the case
	Input:	abcba	123454361   AbcDCBa
	Outpu:	TRUE	FALSE	    TRUE		*/
	
#include<stdio.h>

#define TRUE		1
#define FALSE	0

typedef int BOOL;

BOOL ChkPalindrome(char * p)
{
	char *Start=p;
	char *End=p;
	
	while(*p!='\0')
	{
		p++;
		End++;
	}
	
	End--;
	
	while(Start<=End)
	{
		if((*Start!=*End)&&(*Start!=*End+32)&&(*Start!=*End-32)&&(*End!=*Start+32)&&(*End!=*Start-32))
		{
			break;
		}
		Start++;
		End--;
	}
	
	if(Start>End)
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
		
