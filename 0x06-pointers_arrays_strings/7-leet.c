#include <stdio.h>
#include <string.h>

/**
 * leet - function
 * @s:str
 * Return: char*
 */
char *leet(char *s)
{
	int r = strlen(s);
	int i;
	int i2;
	char arr[10] = {'a', 'A', 'e', 'E',
		'o', 'O', 't', 'T', 'l', 'L'};
	char arr2[10] = {'4', '4', '3', '3',
		'0', '0', '7', '7', '1', '1'};

	for (i = 0; i < r; i++)
	{
		for (i2 = 0; i2 < 10; i2++)
		{
			if (s[i] == arr[i2])
			{
				s[i] = arr2[i2];
			}
		}
	}

	return (s);
}
