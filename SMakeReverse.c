/* Accept string from user and reverse that string inplace and print it
	Input:	abcd	@#cv    12345  
	Output:	dcba	vc#@	54321					*/
	
#include<stdio.h>

void Reverse(char *p)
{
	char * iStart=p;
	char * iEnd=p;
	
	char cTemp='\0';
	
	while(*p!='\0')
	{
		iEnd++;
		p++;
	}
	
	iEnd--;
	
	while(iStart<iEnd)
	{
		cTemp=* iStart;
		* iStart=* iEnd;
		* iEnd=cTemp;
		
		iStart++;
		iEnd--;
	}
	
}	

int main()
{
	char Arr[30];
		
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	
	printf("Reverse string is: ");
	
	printf("%s",Arr);
	
	printf("\n");
	
	return 0;
}
