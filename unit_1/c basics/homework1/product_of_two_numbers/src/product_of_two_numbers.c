/*
 ============================================================================
 Name        : product_of_two_numbers.c
 Author      : mahmoud abdelgawad
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	float a ,b;
	printf("Enter two floating numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&a,&b);
	printf("product: %0.2f",a*b);

}
