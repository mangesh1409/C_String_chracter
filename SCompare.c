/* Accept  2 strings from user and check whether contents of both strings are equal or not.

	Input :    String 1- Marvellous Infosystems
		   String 2- Marvellous Infosystems

	Output : Strings are equal				*/
	
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL SCompare(char * p, char * q)
{
	if((p==NULL)||(q==NULL))
	{
		return FALSE;
	}
	
	while((*q!='\0')&&(*p!='\0'))
	{
		if(*p!=*q)
		{
			break;
		}
		  q++;
		  p++;
	}
	
	if((*p=='\0')&&(*q=='\0'))
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
	BOOL bRet=FALSE;
	char arr[50]={'\0'};
	char brr[30]={'\0'};
		
	printf("Enter 1st string: ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter 2nd string: ");
	scanf(" %[^'\n']s",brr);
	
	bRet=SCompare(arr,brr);

	if(bRet==TRUE)	
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are not equal");
	}
	
	printf("\n");
	
	return 0;
}	
