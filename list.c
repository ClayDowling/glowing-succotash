/* Implementation of linked list
 */

#include <stdlib.h>

#include "list.h"


struct element_t {
  int content;
  struct element_t *next;
};

struct list_t {
  struct element_t *top;
};

List list_create(int value)
{
  List new = (List)calloc(1, sizeof(struct list_t));
  new->top = (struct element_t*)calloc(1, sizeof(struct element_t));
  new->top->content = value;
  return new;
}

int list_contents(List element)
{
  return element->top->content;
}

void list_append(List list, int value)
{
  // do nothing
}
