#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Line number of the instruction.
 * Return: No return value.
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *current_node;
	int stack_size = 0, product;

	current_node = *head;

	while (current_node)
	{
	current_node = current_node->next;
	stack_size++;
	}

	if (stack_size < 2)
	{
	fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
	}

	current_node = *head;
	product = current_node->next->n * current_node->n;
	current_node->next->n = product;
	*head = current_node->next;
	free(current_node);
}
