#include <stdio.h>

/**
 * include standard input-output library
 */
int main(void)
{
	double pi = 3.14159;
	/**
	 * declare a variable named pi and initializing it with
	 * the value 3.14159
	 */
	double e = 2.71828;
	/**
	 * declare a double variable named e and initializing it with
	 * the value 2.71828
	 */
	double largenumber = 1.234567890123456;
	/**
	 * declare a double variable named largenumber and initializes it with a precise value
	 */

	/**
	 * print the value of the double variables
	 */
	printf("value of pi: %.5f\n", pi);
	/**
	 * modulus float (%f) format specifier is used to print a floating-point number
	 */
	printf("value of e: %.5f\n", e);
	/**
	 * prints the value of e
	 */
	printf("value of largenumber: %.15f\n", largenumber);
	/**
	 * prints the value of largenumber with high precision
	 */

	/**
	 * return (0); to indicate tht the program ended successfully
	 */

	return (0);
}
