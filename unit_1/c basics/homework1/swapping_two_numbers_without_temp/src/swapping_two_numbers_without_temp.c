/*
 ============================================================================
 Name        : swapping_two_numbers_without_temp.c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include<stdio.h>
int main()
{
	float a, b;
	printf("Enter the value of a :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter the value of b :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping, value of a =%0.1f\n",a);
	printf("After swapping, value of b =%0.1f",b);
	return 0;
}
