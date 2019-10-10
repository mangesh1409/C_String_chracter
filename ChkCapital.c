/* Accept character from user and check whether it's capital letter or not
	Input:	F	a	B	y
	Output:	True	False	True	False				   */
	

#include<stdio.h>

#define TRUE	1
#define FALSE	0

typedef  int BOOL;

BOOL Chk(char Ch)
{
	if((Ch>='A')&&(Ch<='Z')) 
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
		printf("%c is capital case character",ch);
	}
	else
	{
		printf("%c is not capital case character",ch);
	}
	
	printf("\n");
	
	return 0;
}
