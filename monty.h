#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

void process_line(char *line, stack_t **stack, unsigned int line_number);
void push_stack(stack_t **stack, int value);
void print_stack(stack_t *stack);
void free_stack(stack_t *stack);

#endif /* MONTY_H */
