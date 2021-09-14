#include "palindrome.h"
/* #include <stdio.h> */
/**
 * is_palindrome - Checks if a number is a palindrome or not.
 *      @n:      - Number to check.
 *    Return:    - 1 if n is palindrome, 0 otherwise.
 */
int is_palindrome(unsigned long n)
{
	int list_of_numbers[19], *left = NULL, *right = NULL, length = 0;
	int	number_for_list = 0, half = 0;

	if (n > 0 && n < 10)
		return (1);

	left = right = list_of_numbers;

	while (n != 0)
	{
		number_for_list = n % 10;
		*right = number_for_list;
		length++;
		right++;
		n = n / 10;
	}

	right--;
	half = length / 2;

	while (length > half)
	{
		if (*right != *left)
			return (0);
		/* printf("%d<------>%d\n", *left, *right); */
		left++;
		right--;
		length--;
	}
	return (1);
}
