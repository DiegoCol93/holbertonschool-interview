#include "search_algos.h"

/**
 * advanced_binary - Searches for the first value given doing binary search
 *
 *     @array:     - Pointer to the start of the array.
 *      @size:     - Number of elements in the array.
 *     @value:     - Value to look for.
 *
 *     Return:     - int type, index of the value found in the array,
 *                   (-1) if not found or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (recurse(array, 0, size - 1, value));
}

/**
 * recurse - recursively searches for a value
 *
 * @array: - pointer to the first element of the array to search in
 *  @min:  - left boundary
 *  @max:  - right bounday
 * @value: - value to search for
 *
 * Return: - Index where value is located or -1
 */
int recurse(int *array, int min, int max, int value)
{
	int mid;

	if (min > max)
		return (-1);

	printf("Searching in array: ");
	print_array(array, min, max);

	if (min == max && array[max] == value)
		return (max);

	if (min == max && array[max] != value)
		return (-1);

	mid = min + (max - min) / 2;

	if ((mid == min || value != array[mid - 1]) && array[mid] == value)
		return (mid);

	if (array[mid] >= value)
		return (recurse(array, min, mid, value));
	return (recurse(array, mid + 1, max, value));
}

/**
 * print_array - Prints the array
 *
 *   @array:   - pointer to the first element of the array to print
 *    @min:    - left side
 *    @max:    - right side
 *
 */
void print_array(int *array, int min, int max)
{
	int i;

	for (i = min; i < max; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}
