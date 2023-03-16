/*
 ============================================================================
 Name        : simation_of(n_to_n).c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include<stdio.h>
int main()
{
	int a ,i,sum=0;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	for(i=1;i<=a;i++)
		sum+=i;
	printf("sum = %d",sum);
}
