/* Accept string from user and display only digits from that string
	Input:	Man43ge68 bsf76FT&@$
	Output:	436876																*/
	
#include<stdio.h>

void DisplayDigit(char * p)
{
	while(*p!='\0')
	{
		if((*p>='0')&&(*p<='9'))
		{
			printf("%c",*p);
		}
		p++;
	}
}

int main()
{
	char arr[30];
	
	printf("Enter string:");
	scanf("%[^'\n']s",arr);
	
	DisplayDigit(arr);
	
	printf("\n");
	
	return 0;
}
