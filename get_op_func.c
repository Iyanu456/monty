#include "monty.h"
int get_op_func(char *str, stack_t **stack, int line_number)
{
	int i;

	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{NULL, NULL},
	};

	for (i = 0; i < 4; i++)
	{
		if (strcmp(instruct[i].opcode, str) == 0)
		{
			instruct[i].f(stack, line_number);
			return(0);
		}
		i++;
	}

	return (1);

}
