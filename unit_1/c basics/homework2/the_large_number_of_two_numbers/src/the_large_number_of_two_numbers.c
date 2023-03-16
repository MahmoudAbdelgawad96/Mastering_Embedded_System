/*
 ============================================================================
 Name        : the_large_number_of_two_numbers.c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include <stdio.h>
int main()
{
	float x , y , z ;
	printf("enter three values :");
	fflush(stdin);fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);

	if (x>y && x>z)
	printf("the large number is =%0.2f ",x);
	else if (y>x && y>z)
		printf("the large number is =%0.2f ",y);
	else
			printf("the large number is =%0.2f ",z);


}
