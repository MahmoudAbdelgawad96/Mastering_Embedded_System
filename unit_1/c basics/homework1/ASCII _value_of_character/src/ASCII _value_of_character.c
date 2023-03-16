/*
 ============================================================================
 Name        : ASCII value of character .c
 Author      : mahmoud abdelgawad
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */


#include <stdio.h>


int main()
{
	char a ;
	printf("Enter a character : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);
	printf("ASCII value of %c: %d",a,a);

}
