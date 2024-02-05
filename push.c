#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void push(stack_t **stack, unsigned int line_number)
{
    /* Check if there is an argument */
    if (!stack || !line_number)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Parse the integer argument */
    int value; // Replace global_argument with the actual variable you are using
    if (!/* code to convert argument to integer, use global_argument here */)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Create a new stack node */
    stack_t *new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack)
        (*stack)->prev = new_node;

    *stack = new_node;
}
