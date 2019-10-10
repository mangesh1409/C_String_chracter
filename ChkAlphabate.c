/* Accept character from user and check whether it's an alphabate or not
	Input:	F	&	^	y
	Output:	True	False	False	True			   */
	

#include<stdio.h>

#define TRUE	1
#define FALSE	0

typedef  int BOOL;

BOOL Chk(char Ch)
{
	if((Ch>='A')&&(Ch<='z')) 
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
	char ch='\0';
	BOOL bRet=FALSE;
	
	printf("Enter character: ");
	scanf("%c",&ch);
	
	bRet=Chk(ch);
	
	if(bRet==TRUE)
	{
		printf("%c is an alphabate",ch);
	}
	else
	{
		printf("%c is not an alphabate",ch);
	}
	
	printf("\n");
	
	return 0;
}
