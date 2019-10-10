/* Accept string & one character from user and return index of 1st occurence of charcter in that string
	Input:	Marvellous Multi OS	Marvellous Multi OS
		e			W
	Output:	4			-1									*/
	
#include<stdio.h>

int FirstOccur(char *p, char ch)
{
	int i=0;
	
	while(*p!='\0')
	{
		if(*p==ch)
		{
			break;
		}
		p++;
		i++;
	}
	
	if(*p=='\0')
	{
		return -1;
	}
	else
	{
		return i;
	}
}

int main()
{
	char Arr[30], ch='\0';
	
	int iRet=0;
	
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter character: ");
	scanf("%s",&ch);
	
	iRet=FirstOccur(Arr, ch);
	
	printf("First occurence of %c is at %d",ch,iRet);
	
	printf("\n");

	return 0;
}	
