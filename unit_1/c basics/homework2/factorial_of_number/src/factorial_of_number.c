/*
 ============================================================================
 Name        : factorial_of_number.c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main()
{
	int a ,i=1;
	unsigned  long int fact=1;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	if (a>0)
	{for(i=1;i<=a;i++)
		fact*=i;
		printf("factorial = %lu",fact);}
	else
		printf("error factorial of negative number doesn't exist");
}
