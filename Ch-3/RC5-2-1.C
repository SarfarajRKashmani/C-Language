#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define P printf

/*
	Variable:
		- variables are the containers which stores the
		  value.
		Syntax:
			DataType varName = value;

	Data Type:
		- indicates which type of value will be stored in variable.
		- also indicates how many memory bytes will be allocated
		  to the variable.

		Numbers :
		   - Natural numbers	: 3.14, 2.5	float	4 bytes
		   - Real numbers       : 10, 55	int	2/4 bytes
		Characters:		: A-Z,a-z	char	1 byte

	NOTE: all the variables must be created before calling any function.

	Format specifier:
		- int		%d, %i
		- float		%f
		- char		%c

	User input:
		- scanf("format specifier only",address of variable);
		- address of operator: &varName

	Constant :
		- fixed value

		1. using 'const' keyword:
			const DatyType varName = value;
			- const variable must be initialized.
			- initialized: declaration + assignment
		2. using MACRO
			- use of '#define' pre-processor
			#define varName value


*/

main()
{
	int a,b;
//	const float pi = 3.14;
	char c;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);

	fflush(stdin);

	printf("Enter any character: ");
	scanf("%c",&c);

	P("%d + %d: %d\n",a,b,a+b);
	P("Pi: %.2f\n",pi);
	P("Char: %c\n",c);
	getch();
}