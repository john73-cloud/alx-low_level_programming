

#include<stdio.h>
int main() 
{
	char charType;
	int intType;
	long int lintType;
	long long int lliType;
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of char: %zu byte(s)\n", sizeof(intType));
	printf("Size of char: %zu byte(s)\n", sizeof(lintType));
	printf("Size of char: %zu byte(s)\n", sizeof(lliType));
    return 0;
}
