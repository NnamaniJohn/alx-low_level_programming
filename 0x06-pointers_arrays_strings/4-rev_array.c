#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: int
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}

}
