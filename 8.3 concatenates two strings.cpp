#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[10] = {'hello'};
	char ch2[10] = {'c'};
	strcat(ch1,ch2);
	printf("Value of first string is: %s", ch1);
}
