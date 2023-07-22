//Header file	=> pre-processor: #include
#include<stdio.h>
#include<conio.h>
/*
	This is multi line comment

	Escape sequance characters:
		new line	:	\n
		tab space	:	\t
				: NEW OS: 4 space
				: OLD OS: 8 space from first character
		double quotes   :	\"
		backslash	: 	\\

12345678
12345678123456789
*/
void main()
{
	int a,b;
	clrscr();
	printf("Hello\nWorld !!\n");
	printf("New line !!\n\n");
	printf("Name\t : Aman\n");
	printf("Age\t : 16\n");
	printf("Course\t : C Language\n");
	printf("Hobby\t : \"Coding\"  \\_/  \n\n");

/*	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
*/
	getch();
}
