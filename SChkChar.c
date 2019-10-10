/* Accept string & one character from user and check whether that character is present or not in that string
	Input:	Marvellous MulTi OS    nagTy T32vb
		e			%
	Output: Present			Absent							*/
	
	
#include<stdio.h>

#define TRUE 	1
#define FALSE	0

typedef int BOOL;

BOOL ChkChar(char *p, char ch)
{
	while(*p!='\0')
	{
		if(*p==ch)
		{
			break;
		}
		p++;
	}
	
	if(*p=='\0')
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	char Arr[30], ch='\0';
	
	BOOL bRet=FALSE;
	
	printf("Enter string: ");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter character: ");
	scanf("%s",&ch);
	
	bRet=ChkChar(Arr,ch);
	
	if(bRet==TRUE)
	{
		printf("%c is found",ch);
	}
	else
	{
		printf("%c is not found",ch);
	}

	printf("\n");

	return 0;
}
