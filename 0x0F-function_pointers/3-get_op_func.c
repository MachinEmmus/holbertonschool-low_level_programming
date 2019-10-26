#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_op_func - select correct function
 * @s: Operator as arg to program
 * Return: int;
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
int i = 0;
	while (i < 5)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);

}
