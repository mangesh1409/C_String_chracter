/* Accept character from user and check whether it's digit or not
	Input:	F	2	b	4
	Output:	False	True	False	True		   */
	

#include<stdio.h>

#define TRUE	1
#define FALSE	0

typedef  int BOOL;

BOOL Chk(char Ch)
{
	if((Ch>='0')&&(Ch<='9')) 
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
		printf("%c is digit",ch);
	}
	else
	{
		printf("%c is not digit",ch);
	}
	
	printf("\n");
	
	return 0;
}
