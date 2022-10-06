#include <stdio.h>
#include <stdlib.h>

/**
 * array_range- arr
 * @min: min num
 * @max: max num
 * Return: int *
 */
int *array_range(int min, int max)
{
	int i = 0;
	int s = min;
	int x = max - min + 1;
	int *store = malloc(sizeof(int) * x);

	if (min > max || store == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		store[i] = s;
		s++;
	}
	return (store);
}
