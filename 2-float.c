#include <stdio.h>

/**
 * this is a floating point data type 
 * which is a decimal point number
 */
int main(void)
{
	/**
	 * declaring a floating point number (integer)
	 */
	float price = 19.99;

	/**
	 * performing arithmatic operations with floating-point numbers
	 */

	float sum_result = price + 5.01;
	
	float difference_result = price - 4.99;

	float product_result = price * 2.0;

	float qoutient_result = price / 3.0;

	/**
	 * printing the result using printf (print formated)
	 */
	printf("sum: %d\n", sum_result);

	printf("difference: %d\n", difference_result);

	printf("product: %d\n", product_result);

	printf("qoutient: %d\n", qoutient_result);

	return (0);
}
