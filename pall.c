#include "monty.h"

/**
 * print_stack - Print all values on the stack
 * @stack: pointer to the stack
 */
void print_stack(stack_t *stack)
{
	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
