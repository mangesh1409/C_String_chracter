/* Accept  2 strings & 1 number from user and concat that number of character from second string
	after first string.If number is greater than length of 2nd string then concat whole string.
	Input :    String 1- Marvellous Infosystems
		   String 2- Logic Building	
		   No-	8

	Output : Marvellous Infosystems Logic Bu					*/
	
#include<stdio.h>

void SConcatN(char * p, char * q, int iNo)
{
	if((p==NULL)||(q==NULL)||(iNo<0))
	{
		return;
	}
	
	while(*p!='\0')
	{
		p++;
	}
	
	*p=' ';
	  p++;
	 
	while((*q!='\0')&&(iNo>0))
	{
		*p=*q;
		  q++;
		  p++;
		  iNo--;
	}
	
	*p='\0';
}

int main()
{
	int iValue=0;
	char arr[50]={'\0'};
	char brr[30]={'\0'};
		
	printf("Enter 1st string: ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter 2nd string: ");
	scanf(" %[^'\n']s",brr);
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	SConcatN(arr,brr,iValue);
	
	printf("Final string:  %s ",arr);
	printf("\n");
	
	return 0;
}	
