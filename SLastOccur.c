/* Accept string & one character from user and return index of last occurence of charcter in that string
	Input:	Marvellous Multi OS  Marvellous Multi OS   Marvellous Multi OS
		e		     l		           w
	Output:	4		     13		          -1				*/
	
#include<stdio.h>

int LastOccur(char *p, char ch)
{
	int i=0, iPos=-1;
	
	while(*p!='\0')
	{
		if(*p==ch)
		{
			iPos=i;
		}
		p++;
		i++;
	}
	return iPos;
}

int main()
{
	char Arr[30], ch='\0';
	
	int iRet=0;
	
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter character: ");
	scanf("%s",&ch);
	
	iRet=LastOccur(Arr, ch);
	
	printf("Last occurence of %c is at %d",ch,iRet);
	
	printf("\n");

	return 0;
}	
