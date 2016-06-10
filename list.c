/* Implementation of linked list
 */

#include <stdlib.h>

#include "list.h"

struct list_t {
  int content;
  struct list_t *next;
};

List list_create(int value)
{
  List new = (List)calloc(1, sizeof(struct list_t));
  new->content = value;
  return new;
}

int list_contents(List element)
{
  return element->content;
}

void list_append(List top, int value)
{
  // do nothing
}
