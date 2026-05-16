#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[20], ch2[22];
	printf("Enter first string: ");
	gets(ch1);
	printf("Enter second string: ");
	gets(ch2);
	if(strcmp(ch1,ch2)==0)
	{
		printf("Strings are equal.");
	}
	else
	{
		printf("Strings are not equal.");
	}
}
