/* Accept string from user and copy capital letters from that string into another string */

#include<stdio.h>

void CpyStr(char *Source, char *Dest)
{
	while(*Source!='\0')	
	{
		if((*Source>='A')&&(*Source<='Z'))
		{
			*Dest=*Source;
		       Dest++;
		}
		Source++;
	}
}

int main()
{
	char source[30];
	char dest[30];
	
	printf("Enter 1st string: ");
	scanf("%[^'\n']s",source);
	
	CpyStr(source,dest);
	
	printf("2nd string: ");
	printf("%s",dest);
	
	printf("\n");
	
	return 0;
}
