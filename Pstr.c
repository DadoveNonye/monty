#include "monty.h"

/**
 * f_pstr - Prints the ASCII characters represented by stack values,
 * starting from the top of the stack, until a non-printable
 * character
 * or the end of the stack is encountered.
 * @head: Pointer to the head of the stack.
 * @counter: Line number of the instruction.
 * Return: No return value.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
