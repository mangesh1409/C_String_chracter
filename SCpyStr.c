/* Accept string from user and copy the contents of that string into another string */

#include<stdio.h>

void CpyStr(char *Source, char *Dest)
{
	while(*Source!='\0')	
	{
		*Dest=*Source;
		Source++;
		Dest++;
	}
}

int main()
{
	char source[30];
	char dest[30];
	
	printf("Enter string:");
	scanf("%[^'\n']s",source);
	
	CpyStr(source,dest);
	
	printf("%s",dest);
	printf("\n");
	
	return 0;
}
		
	
	
	
