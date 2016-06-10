/* Test suite for linked list
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void list_create_returns_initialized_list()
{
  List top = list_create(7);
  assert(NULL != top);
}

void list_create_populates_contents()
{
  List top = list_create(7);
  assert(list_contents(top) == 7);
}

int main(int argc, char **argv)
{
  list_create_returns_initialized_list();
  list_create_populates_contents();

  return 0;
}
