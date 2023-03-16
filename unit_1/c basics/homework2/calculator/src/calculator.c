/*
 ============================================================================
 Name        : calculator.c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */
#include<stdio.h>
int main()
{
	float a ,b;
	char x;
	printf("Enter operator either + or - or * or / :");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	printf("Enter two number ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&a,&b);
	switch (x)
	{ case '+':
	{printf("%0.2f + %0.2f =%0.2f",a,b,a+b);}
	break;
	case '-':
		{printf("%0.2f - %0.2f =%0.2f",a,b,a-b);}
		break;
	case '*':
		{printf("%0.2f * %0.2f =%0.2f",a,b,a*b);}
		break;
	case '/':
		{printf("%0.2f / %0.2f =%0.2f",a,b,a/b);}
		break;
	default:
		printf("error the operator is not correct ");
		break;

	}

}
