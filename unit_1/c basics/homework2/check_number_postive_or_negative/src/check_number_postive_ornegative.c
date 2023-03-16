/*
 ============================================================================
 Name        : check_number_postive_ornegative.c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	float x ;
	printf("enter a number :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);

	if (x!=0)
	{
		if(x>0)
			printf("%0.2f is postive. ",x);
		else
			printf("%0.2f is negative. ",x);
	}
	else
		printf("you entered zero");


}
