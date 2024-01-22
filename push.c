#include "monty.h"

/**
 * push_stack - Push a value onto the stack
 * @stack: double pointer to the stack
 * @value: value to push
 */
void push_stack(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
	    fprintf(stderr, "Error: malloc failed\n");
	    free_stack(*stack);
	    free(line);
	    fclose(file);
	    exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;

	if (*stack != NULL)
	{
	    new_node->next = *stack;
	    (*stack)->prev = new_node;
	}
	else
	{
	    new_node->next = NULL;
	}

	*stack = new_node;
}

