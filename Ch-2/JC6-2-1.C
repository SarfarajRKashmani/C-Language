#include<stdio.h>
#include<conio.h>

/*
	Data :
		N Numbers : 10, 20, 30, 40, 50
		R Numbers : 3.14, 2.5
		Characters: 'A', 'B', 'C', 'a', 'b', 'c', ...
		String	  : "Name"
		Boolean	  : true, false

	Datatype :
		- it defines which type of data will be stored in variable.
		- it defines how many memory bytes will be allocated to the
		  variable.

		N Numbers	=> Integers	=> int 		=> 2/4
		R Numbers	=> Floats	=> float	=> 4
		Characters	=> character	=> char		=> 1
		String		=> char array	=> char[]	=> 1*length

	Variables :
		- are the containers which stores the value.
		- syntax :
			DataType varName = value;
	Rules to name a variable :
		- it can be in UPPERCASE, lowercase, camelCase or TitleCase
		- it can be in alpha-numeric value but can't begin with
		  numbers.
		- it can't have any special character except of '_' (unserscore)
		- it can't be repeated.

	NOTE : all variables must be declared before calling(using)
	       any function.

	Format specifiers :
		int 	=> %d, %i
		char	=> %c
		float	=> %f
		char[]	=> %s

*/

main()
{
	int a = 10;
	int b = 5;
	clrscr();
	printf("%d + %d = %d",a,b,a%b);
	getch();
}