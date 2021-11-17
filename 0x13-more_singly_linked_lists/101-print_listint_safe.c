#include "lists.h"
/**
 * *reverse_list - prints a listint_t linked list.
 * @head: variable that point to type list
 * Return: a pointer to the first node of the reversed list
 */
size_t print_listint_safe(const listint_t *head)
{
    unsigned int elements;

    if (head == NULL)
    {
        exit(98);
    }
    while (head != NULL)
    {
        printf("[%p] %d\n", (void*)head, head->n);
        elements++;
        if (head->next >= head)
        {
            printf("-> [%p] %d\n", (void*)head->next, head->next->n);
            return (elements);
        }
        head = head->next;
    }
    return (elements);
}
