/*  Accept string from user and return difference between frequency of small letters and frequency of capital letters
	Input:		MarvellouS
	Output:		6 (8-2)																															*/
	
#include<stdio.h>

int Diffrence(char *p)
{
	int i=0,j=0;
	
	while(*p!='\0')
	{
		if((*p>='A')&&(*p<='Z'))
		{
			i++;
		}
		else if((*p>='a')&&(*p<='z'))
		{
			j++;
		}
		p++;
	}
	return j-i;
}

int main()
{
	char Arr[20];
	
	int iRet=0;
	
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	iRet=Diffrence(Arr);
	
	printf("Diffrence is %d",iRet);
	
	printf("\n");

	return 0;
}
