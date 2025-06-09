#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: Double pointer to the head of the list
* @str: String to duplicate and add in the new node
* Return: Address of the new element, or NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dup_str;

if (!str)
return (NULL);

dup_str = strdup(str);
if (!dup_str)
return (NULL);

new_node = malloc(sizeof(list_t));
if (!new_node)
{
free(dup_str);
return (NULL);
}

new_node->str = dup_str;
new_node->len = strlen(dup_str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
