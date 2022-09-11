#include<stdio.h>
/**
 * main - Entry point
 * Description - 'main'
 * Return: return (0) - always a success
 */
int main(void)
{
	char charType;
	int intType;
	long int lintType;
	long long int lliType;
	float ftype;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lliType));
	printf("Size of a float: %zu byte(s)\n", sizeof(ftype));
	return (0);
}
