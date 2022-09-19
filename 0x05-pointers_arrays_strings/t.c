#include <stdio.h>

void main (void){
	int c = 3;
	int b = 4;
	int tmp = c;
	int m = b;

	c = m;
	b = tmp;
	printf("%d, %d", c, b);
}
