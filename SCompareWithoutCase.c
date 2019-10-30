/* Accept  2 strings from user and check whether contents of both strings are equal or not without considering case.

	Input :    String 1- MaRvelLOUS
		   String 2- MarVELloUs

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
		if((*p!=*q)&&(*p!=*q+32)&&(*p!=*q-32)&&(*q!=*p+32)&&(*q!=*p-32))
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
	//char arr[50] = "Marvellous Infosystems";
	//char brr[30] = "Logic Building";
	
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
