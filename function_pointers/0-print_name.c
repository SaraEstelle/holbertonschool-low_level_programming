#include "function_pointers.h"
#include <stddef.h>
/**
* print_name -  function that prints a name
* @name: the name to print
* @f: function that prints the name
*
*Retrun: nothing (void)
*/

void print_name(char *name, void (*f)(char *))

{
	if  (name == NULL || f == NULL)
	return;
	f(name);
}
