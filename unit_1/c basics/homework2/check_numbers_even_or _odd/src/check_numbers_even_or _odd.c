/*
 ============================================================================
 Name        : check_numbers_even_or.c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main()
{
	int a ;
	printf("Enter an integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
if ((a%2)==0)
	printf("%d is even",a);
else
	printf("%d is odd",a);

}
