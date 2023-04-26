#include <stdio.h>
#include <cs50.c>

int main(void)
{
	int a = get_int("a= ");
	int b = get_int("b= ");

	// type casting
	float x = (float) a / (float) b;

	printf("a / b = %.20f", x);
}