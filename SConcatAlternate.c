/* Accept  2 strings from user and concat alternate character from second string after first string.
	Input :    String 1- Marvellous Infosystems
		   String 2- Logic Building	

	Output : Marvellous Infosystems LgcBidn				*/
	
#include<stdio.h>

void SConcat(char * p, char * q)
{
	if((p==NULL)||(q==NULL))
	{
		return;
	}
	
	while(*p!='\0')
	{
		p++;
	}
	
	*p=' ';
	  p++;
	 
	while(*q!='\0')
	{
		*p=*q;
		  q=q+2;
		  p++;
	}
	
	*p='\0';
}

int main()
{
	char arr[50]={'\0'};
	char brr[30]={'\0'};
	
	printf("Enter 1st string: ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter 2nd string: ");
	scanf(" %[^'\n']s",brr);
	
	SConcat(arr,brr);
	
	printf("Final string:  %s ",arr);
	printf("\n");
	
	return 0;
}	
