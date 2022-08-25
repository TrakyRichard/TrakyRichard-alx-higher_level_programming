#include "lists.h"

int check_cycle(listint_t *list)
{
listint_t *hare;
listint_t *turtoise;

turtoise = list;
hare = list;

while (hare != NULL && turtoise != NULL)
{
	turtoise = turtoise->next;
	hare = hare->next->next;
	if (turtoise == hare)
	return (1);
}
return (0);
}
