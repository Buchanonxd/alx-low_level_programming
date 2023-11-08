#include "3-calc.h"

/**
 * get_op_func - selects the function to be done
 * @s: operator passed to the function
 * Return: pointer to function
*/

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return(0);
}
