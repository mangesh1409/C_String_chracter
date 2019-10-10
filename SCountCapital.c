/* Accept string from user and count capital letters 
	Input:	Marvellous MULTi oS
	Output:	6				*/
	
#include<stdio.h>

int Count(char *p)
{
	int i=0;
	
	while(*p!='\0')
	{
		if((*p>='A')&&(*p<='Z'))
		{
			i++;
		}
		p++;
	}
	return i;
}

int main()
{
	char Arr[20];
	
	int iRet=0;
	
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	iRet=Count(Arr);
	
	printf("Number of capital letters are %d",iRet);
	
	printf("\n");

	return 0;
}
