#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 *
 * @str: string
 *
 * @len: length of string
 *
 * @next: points to next node
 *
 * Description: node structure
 */

typedef struct list_s
{
    char *str;
    unsigned int i1;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void first(void) __attribute__ ((constructor));

#endif
