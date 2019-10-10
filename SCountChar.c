/* Accept string & one character from user and return frequency of that charcter in that string
	Input:	MarvellLlouS Multi OS
		l
	Output:	4										*/
	
#include<stdio.h>

int Frequency(char *p, char ch)
{
	int i=0;
	
	while(*p!='\0')
	{
		if(*p==ch)
		{
			i++;
		}
		p++;
	}
	return i;
}

int main()
{
	char Arr[30], ch='\0';
	
	int iRet=0;
	
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter character: ");
	scanf("%s",&ch);
	
	iRet=Frequency(Arr,ch);
	
	printf("Frequency of %c is %d",ch,iRet);
	
	printf("\n");

	return 0;
}
