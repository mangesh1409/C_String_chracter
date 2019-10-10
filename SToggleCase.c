/* Accept string from user and toggle the case
	Input:	MaRvELlOuS MuLtI
	Output:	mArVelLoUs mUlTi		*/
	
#include<stdio.h>

void ToggleCase(char *p)
{
	while(*p!='\0')
	{
		if((*p>='A')&&(*p<='Z'))
		{
			*p=*p+32;
		}
		else if((*p>='a')&&(*p<='z'))
		{
			*p=*p-32;
		}
		p++;
	}
}

int main()
{
	char arr[30];
	
	printf("Enter string:");
	scanf("%[^'\n']s",arr);
	
	ToggleCase(arr);
	
	printf("Modified string: %s",arr);
	
	printf("\n");
	
	return 0;
}
	
