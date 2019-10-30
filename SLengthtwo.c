/* Accept two string from user and display length of both string
	Input: 	String 1-  India is my
		String 2-  hello world..
	Output:	   11	 	13											*/
	

#include<stdio.h>

void StrlenX(char * p, char * q)
{
	int i=0, j=0;
	
	if((p==NULL)||(q==NULL))
	{
		return;
	}
	
	while((*p!='\0')||(*q!='\0'))
	{
		if(*p!='\0')
		{
			i++;
			  p++;
		}
		if(*q!='\0')
		{
			j++;
			q++;
		}		  
	}
	
	printf("Length of strings are %d & %d ",i,j);
}

int main()
{
	char arr[50]={'\0'};
	char brr[30]={'\0'};
		
	printf("Enter 1st string: ");
	scanf("%[^'\n']s",arr);
	
	printf("Enter 2nd string: ");
	scanf(" %[^'\n']s",brr);
	
	StrlenX(arr,brr);

	printf("\n");
	
	return 0;
}	
