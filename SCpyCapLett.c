/* Accept string from user and copy capital letters from that string into another string 
		Input:	India Is My CountrY
		Output:	IIMCY 																				*/

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
	*Dest='\0';
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
