#include "main.h"
/**
 *_isupper -functions that checks for uppercase caracters
 *@c : caracter that will be checked
 *Return 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
