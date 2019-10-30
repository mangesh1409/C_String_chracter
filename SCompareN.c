/* Accept  2 strings & 1 number from user and check whether number of that character in both strings are equal or not.

	Input :    String 1- Marvellous Infosystems
		   String 2- Marvellous Infosystems
		   No-   6
	Output : Strings are equal				*/
	
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL SCompareN(char * p, char * q,int iNo)
{
	if((p==NULL)||(q==NULL)||(iNo<0))
	{
		return FALSE;
	}
	
	while((*q!='\0')&&(*p!='\0')&&(iNo>0))
	{
		if(*p!=*q)
		{
			break;
		}
		  q++;
		  p++;
		  iNo--;
	}
	
	if((iNo==0)||(*q=='\0'))
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
	int iValue=0;
		
	printf("Enter 1st string: ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter 2nd string: ");
	scanf(" %[^'\n']s",brr);
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	bRet=SCompareN(arr,brr,iValue);

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
