#include "monty.h"
#include <stdio.h>

void pall(stack_t **stack, unsigned int line_number)
{
    /* Check if the stack is empty */
    if (!stack || !*stack)
        return;

    /* Print all values on the stack */
    stack_t *current = *stack;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
