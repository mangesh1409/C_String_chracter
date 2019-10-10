/* Accept character from user and check whether it's small letter or not
	Input:	F	a	B	y
	Output:	False	True	False	True			   */
	

#include<stdio.h>

#define TRUE	1
#define FALSE	0

typedef  int BOOL;

BOOL Chk(char Ch)
{
	if((Ch>='a')&&(Ch<='z')) 
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
		printf("%c is small case character",ch);
	}
	else
	{
		printf("%c is not small case character",ch);
	}
	
	printf("\n");
	
	return 0;
}
