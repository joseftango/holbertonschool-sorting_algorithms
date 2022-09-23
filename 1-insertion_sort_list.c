#include "sort.h"
/**
* insertion_sort_list - function that sort a list in ascending order
* @list: linked list
* Return: void
**/

void insertion_sort_list(listint_t **list)
{
listint_t *tmp, *curr, *hold;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

tmp = (*list)->next;
while (tmp)
{
curr = tmp;
while (curr->prev != NULL && curr->n < curr->prev->n)
{
hold = curr->prev->prev;

if (hold != NULL)
hold->next = curr;
curr->prev->prev = curr;
curr->prev->next = curr->next;

if (curr->next != NULL)
curr->next->prev = curr->prev;

curr->next = curr->prev;
curr->prev = hold;

if (curr->prev == NULL)
*list = curr;
print_list(*list);
}

tmp = tmp->next;
}

}
