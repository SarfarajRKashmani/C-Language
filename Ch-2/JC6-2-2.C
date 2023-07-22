#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define bol_bhai printf
#define clear clrscr
#define hold getch

/*
	Keywords :
		- reserved words that can't be used in other purpose.
		- 32.
		- DataTypes => int, float, char, long, unsigned, double, ...
		- Control Structure => if, else, switch, break...
		- Loops => for, do, while,

	Constant :
		- fixed value.
		1. using 'const' keyword :
		=> const DataType varName = value;
		=> const variable must be initialized.

		2. using '#define' pre-processor :
		=> #define varName value
		=> it can define either variables or expressions.

	User input :
		- scanf() function
		- stands for scan formatted
		=> scanf("only format specifiers",address of variable);
		=> address of operator => &varName

*/

main()
{
	float r;
	clear();

	printf("Enter raduius: ");
	scanf("%f",&r);

	printf("Area of circle: %.2f",pi * r * r);

	hold();
}
