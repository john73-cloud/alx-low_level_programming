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
	int x = max - min;
	int *store = malloc(sizeof(int) * x);

	store[0] = min;
	if (min > max || store == NULL)
	{
		return (NULL);
	}
	while (s < max)
	{
		store[i] = s;
		s++;
		i++;
	}
	return (store);
}
