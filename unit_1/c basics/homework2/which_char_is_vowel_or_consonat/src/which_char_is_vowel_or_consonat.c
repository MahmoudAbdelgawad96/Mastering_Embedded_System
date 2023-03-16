/*
 ============================================================================
 Name        : which_char_is_vowel_or_consonat.c
 Author      : Mahmoud abdelgawad
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */
#include<stdio.h>
int main()
{
	char a ;
	printf("Enter an character you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);
if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'
		||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	printf("%c is a vowel",a);
else
	printf("%c is a consonat",a);

}
