/* Accept two characters from user.Swap them if both the characters are small letters
   or both the characters are capital letter. In other cases keep the contents as it is.
	 Input:	 a   b	    A   M     m   B     1   %	
	 Output: b   a	    M   A     m   B     1   %					*/
	 
#include<stdio.h>

void Swap(char *p, char *q)
{
	char ch;
	
	if(((*p>='A')&&(*p<='Z'))&&((*q>='A')&&(*q<='Z')))
	{
		ch=*p;
		*p=*q;
		*q=ch;
	}
	
	else if(((*p>='a')&&(*p<='z'))&&((*q>='a')&&(*q<='z')))
	{
		ch=*p;
		*p=*q;
		*q=ch;
	}
} 
	 
int main()
{
	char ch1, ch2;
	
	printf("Enter 1st character: ");
	scanf("%s",&ch1);
	 
 	printf("Enter 2nd character: ");
	scanf("%s",&ch2);
	
	printf("Before swapping: %c\t%c\n",ch1,ch2);
	
	Swap(&ch1, &ch2);
	
	printf("After swapping:  %c\t%c\n",ch1,ch2);
	
	return 0;
}
