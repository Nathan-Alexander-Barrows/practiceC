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

			/**
			 * switch statement: allows the selection of one of many blocks to be executed
			 */
			switch (expression)
			{
				case value1:
					/**
					 * code to be executed if (expression) = (value1)
					 */
					break;
					/**
					 * code to be executed if (expression) = (value2)
					 */
				case value2:
					break;
					/**
					 * more cases
					 */
				default:
					/**
					 * code to be executed if expression doesnt match any case
					 */
			}

			/**
			 * looping structures: (for) repeats a block of code a specified number of times
			 */
			for (initialization; condition; increment)
			{
				/**
				 * code to be executed
				 */
			}
			/**
			 * while: repeats a block of code (while) a (condition) is true
			 */
			while (condition)
			{
				/**
				 * code to be executed
				 */
			}
			/**
			 * do-while: similar to (while), but ensures that the code block is executed atleast once.
			 */
			do
			{
				/**
				 * code to be executed
				 */
			}
			while (condition);
			/**
			 * jump statements: (break) exits the nearest enclosing loop or switch statement
			 */
			break;
			/**
			 * continue: skips the rest of the code in the current loop iteration and starts the
			 * next iteration
			 */
			continue;
			/**
			 * goto: transfers control to a lebeled statement within the same function
			 */
			goto label;
			/**
			 * some code
			 */
			label:
			/**
			 * code to be executed
			 */

			return (0);
		}
