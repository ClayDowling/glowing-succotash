/* Interface for linked list
 */

#ifndef _LIST_H_

struct list_t;

typedef struct list_t* List;

List list_create(int);
int list_contents(List);
void list_append(List, int);

#endif
