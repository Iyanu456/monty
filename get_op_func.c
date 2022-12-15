#include "monty.h"
int get_op_func(char *str)
{
	int i = 0;
	void func;

	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{NULL, NULL},
	};

	while(instruct[i].f != NULL && strcmp(instruct[i].opcode, str) != 0)
	{
		if (strcmp(instruct[i].opcode, str) == 1)
		{
			func = instruct[i].f(stack, line_number);
			return(0);
		}
		i++;
	}

	return (1);

}
