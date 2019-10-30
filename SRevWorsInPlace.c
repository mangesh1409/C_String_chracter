/* Accept string from user and reverse each word inplace
		Input:	India is My  CountrY
		Output:	aidnI si yM  YrtnuoC							*/
	

#include<stdio.h>

void RevWord(char *p)
{
	char *Start=NULL;
	char *End=NULL;
	char temp='\0';
		
	if(p==NULL)
	{
		return;
	}
				
	while(*p!='\0')
	{
		if(*p==' ')
		{
			while(*p==' ')
			{
				p++;
			}
		}
		
		Start=p;
		End=p;
		
		while((*End!=' ')&&(*End!='\0'))
		{
			End++;
			p=End;
		}
		End--;
		
		while(Start<=End)
		{
			temp=*Start;
			*Start=*End;
			*End=temp;
			
			Start++;
			End--;
		}	
	}
}

int main()
{
	char arr[50]={'\0'};
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	RevWord(arr);
	
	printf("Modified string is\n");
	printf("%s",arr);
	
	printf("\n");
	
	return 0;
}
