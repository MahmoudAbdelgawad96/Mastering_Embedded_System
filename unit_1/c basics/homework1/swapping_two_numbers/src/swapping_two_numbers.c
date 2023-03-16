/*
 ============================================================================
 Name        : swapping_two_numbers.c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include <stdio.h>


int main()
{
	float a,b ,temp;
	printf("Enter value of a : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;

	printf("After swapping, value of a =%0.2f\n",a);
	printf("After swapping, value of a =%0.2f",b);

}
