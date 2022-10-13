#include "function_pointers.h"

/**
  * int_index - searches for an int
  * @array: the arr to check int
  * @size: size of arr
  * @cmp: compare function
  * Return: -1 if not present else int
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 && array == NULL && cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (array[i]);

	return (-1);

}
