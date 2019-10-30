/* Accept two string from user and display number of capital letters from both string
	Input: 	String 1-  InDia IS mY
		String 2-  helLo WOrld..
	Output:		5		3											*/
	

#include<stdio.h>

void CountCapital(char * p, char * q)
{
	int i=0, j=0;
	
	if((p==NULL)||(q==NULL))
	{
		return;
	}
	
	while((*p!='\0')||(*q!='\0'))
	{
		if((*p>='A')&&(*p<='Z'))
		{
			i++;
		}
		if((*q>='A')&&(*q<='Z'))
		{
			j++;
		}
		
		if(*p!='\0')
		{
			 p++;
		}
		if(*q!='\0')
		{
			q++;
		}
	}
	
	printf("Number of capital letters in strings are %d & %d ",i,j);
}

int main()
{
	char arr[50]={'\0'};
	char brr[30]={'\0'};
		
	printf("Enter 1st string: ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter 2nd string: ");
	scanf(" %[^'\n']s",brr);
	
	CountCapital(arr,brr);

	printf("\n");
	
	return 0;
}	
