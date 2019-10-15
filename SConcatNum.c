/* Accept  2 strings from user and 1 number and concat that number of characters from second string
	after first string.
	Input :    String 1- Marvellous Infosystems
		   String 2- Logic Building	
		   No- 	5

	Output : Marvellous Infosystems Logic				*/
	
#include<stdio.h>

void SConcat(char * p, char * q, int No)
{
	while(*p!='\0')
	{
		p++;
	}
	
	*p=' ';
	  p++;
	
	while((*q!='\0')&&(No>0))
	{
		*p=*q;
		  q++;
		  p++;
		  No--;
	}
	
	*q='\0';
}

int main()
{
	char arr[50];
	char brr[30];
	int No=0;
	
	printf("Enter 1st string: ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter 2nd string: ");
	scanf(" %[^'\n']s",brr);

	printf("Enter number: ");
	scanf("%d",&No);
		
	SConcat(arr,brr,No);
	
	printf("Final string:  %s ",arr);
	printf("\n");
	
	return 0;
}	
