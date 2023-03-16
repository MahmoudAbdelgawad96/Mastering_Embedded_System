/*
 ============================================================================
 Name        : alphabet_or_not.c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
int main()
{
	char a ;
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);
if ((a>='a' && a<='z')||(a>='A' && a<='Z'))
	printf("%c is an alphabet",a);
else
	printf("%c is not  an alphabet",a);

}
