/* Accept  2 strings from user and concat second string after first string in reverse order.
	Input :    String 1- Marvellous
		   String 2- Logic	

	Output : Marvellous cigoL				*/
	
#include<stdio.h>

void SConcat(char * p, char * q)
{
	int i=0;
	
	if((p==NULL)||(q==NULL))
	{
		return;
	}
	
	while((*p!='\0')||(*q!='\0'))
	{
		if(*q!='\0')
		{
			i++;
			q++;
		}
		
		if(*p!='\0')
		{
			p++;
		}
		
	}
	
	*p=' ';
	  p++;
	 q--;
	
	while(i>0)
	{
		*p=*q;
		  q--;
		  p++;
		  i--;
	}
	
	*p='\0';
}

int main()
{
	char arr[50]={'\0'};
	char brr[30]={'\0'};
	
	printf("Enter 1st string-");
	scanf("%[^'\n']s",arr);
	
	printf("Enter 2nd string-");
	scanf(" %[^'\n']s",brr);
	
	SConcat(arr,brr);
	
	printf("Final string-%s ",arr);
	printf("\n");
	
	return 0;
}	
