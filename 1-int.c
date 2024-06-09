#include <stdio.h>

/**
 * This is a integer variable
 *
 * Return: 0 = success
 */
int main(void)
{
        /**
         * declaring an integer variable
         */
        int my_integer_variable = 42;
        /**
         * performing arithmatic operations with integers
         */
        int sum_result = my_integer_variable + 10;

        int different_result = my_integer_variable - 5;

        int product_result = my_integer_variable * 2;
         /**
         * using / for integer division
         */
        int quotient_result = my_integer_variable / 3;
        /**
         * using % modulus to get the remainder
         */
        int remainder_result = my_integer_variable % 3;

        /**
         * printing the results using printf (print formated)
         */
        printf("sum: %d\n", sum_result);
        /**
         * ^ above is printing "sum: then the number givin by sum_result,
         * (%d = modulus decimal integer) 
         * followed by a new line, and is using a "call" function when writing 
         * sum_result after the comma
         */
        printf("difference: %d\n", different_result);

        printf("product: %d\n", product_result);

        printf("remainder: %d\n", quotient_result);

        return (0);
}
