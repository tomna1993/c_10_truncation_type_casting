#include <cs50.h>
#include <stdio.h>

//In this example the numbers are integers
//If we try to divide 3 by 2, the program should print 1.5
//But because of integer division it will truncate the number to the integer part = 1
// int main(void)
// {
// 	int a = get_int("a= ");
// 	int b = get_int("b= ");

// 	// type casting
// 	int x = a / b;

// 	printf("a / b = %i", x);
// }


//We can make it work with type casting at least one of the numbers to float with (float)
//Then save the calculated value in a variable declared as float
// int main(void)
// {
// 	int a = get_int("a= ");
// 	int b = get_int("b= ");

// 	// type casting
// 	float x = (float) a / b;

// 	printf("a / b = %f", x);
// }

//If we want more precision we have to use double type
int main(void)
{
	int a = get_int("a= ");
	int b = get_int("b= ");

	// type casting
	double x = (double) a / (double) b;

	printf("a / b = %.20f", x);
}