#include "monty.h"
int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(argv[1], stack);
}
