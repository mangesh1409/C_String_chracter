/* Accept  2 strings from user and concat second string
	after first string.
	Input :    String 1- Marvellous Infosystems
				String 2- Logic Building	

	Output : Marvellous Infosystems Logic Building					*/
	
#include<stdio.h>

void SConcat(char * p, char * q)
{
	while(*p!='\0')
	{
		p++;
	}
	
	while(*q!='\0')
	{
		*p=*q;
		  q++;
		  p++;
	}
	
	*q='\0';
}

int main()
{
	char arr[50];
	char brr[30];
	
	//char arr[50] = "Marvellous Infosystems";
	//char brr[30] = "Logic Building";
	
	printf("Enter 1st string: ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter 2nd string: ");
	scanf(" %[^'\n']s",brr);
	
	SConcat(arr,brr);
	
	printf("Final string:  %s ",arr);
	printf("\n");
	
	return 0;
}	
