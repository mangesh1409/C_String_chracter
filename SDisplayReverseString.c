/* Accept string from user and display it in reverse order
	Input:	MarvellouS
	Output:	SuollevraM										*/
	
	
#include<stdio.h>

void Reverse(char *p)
{
	int i=0;
	
	while(*p!='\0')
	{
		i++;
		p++;
	}
	p--;
	
	printf("Reverse string: ");
	
	for(;i>0;i--,p--)
	{
		char ch=*p;
		printf("%c",ch);
	}
}

int main()
{
	char Arr[30];
	
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	
	printf("\n");

	return 0;
}
	
	
