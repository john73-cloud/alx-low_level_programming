#include "t.h"

void print_alphabet(void)
{
	int i;
        char al[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
                'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        for (i = 0; i < 26; i++)
        {
                _putchar(al[i]);
        }
        _putchar('\n');
}
