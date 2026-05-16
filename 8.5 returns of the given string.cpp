#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20];
	printf("Enter string: ");
	gets(ch);
	printf("String is %s ",ch);
	printf("\n Reverse string is %s",strrev(ch));
}
