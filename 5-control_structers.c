#include <stdio.h>

/**
 * this is a program with examples of what a control statement is and the 
 * different types with annotations
 */
int main(void)
{
	/**
	 * if: executes a block of code if a specified condition is true
	 */
	if (condition)
	{
		/**
		 * (condition) the code to be executed if the condition is true
		 */
	}
	/**
	 * if-else: executes one block of code if a condition 
	 * is true and another block if it is false
	 */
	if (condition)
	{
		/**
		 * code to be executed if (condition) is true
		 */
	}
		else
		{
			/**
			 * code to be executed if the (condition) is false
			 */
		}
		/**
		 * else-if: adds additional conditions to an if-else statement
		 */
		if (condition1)
		{
			/**
			 * code to be executed if the (condition1) is true
			 */
			else if (condition2)
			{
				/**
				 * code to be executed if the (condition2) is true
				 */
			}
			else
			{
				/**
				 * code to be executed if both (condition1) and (condition2) are false
				 */
			}

			return (0);
		}
