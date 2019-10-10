/* Accept character from user and check whether it is special symbol or not
	(!,  @,  #,  $,  %,  ^,  &,  *)
	
	Input:	@	e	2	^
	Output:	True	False	False	True				*/
	
#include<stdio.h>

#define TRUE	1
#define FALSE	0

typedef  int BOOL;

BOOL Chk(char Ch)
{
	if((Ch=='!')||(Ch=='@')||(Ch=='#')||(Ch=='$')||(Ch=='%')||(Ch=='^')||(Ch=='&')||(Ch=='*'))
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
		printf("%c is special symbol",ch);
	}
	else
	{
		printf("%c is not special symbol",ch);
	}
	
	printf("\n");
	
	return 0;
}
