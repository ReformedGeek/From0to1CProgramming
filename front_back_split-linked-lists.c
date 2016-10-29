#include <stdio.h>
#include <assert.h>

//Given a linked list with nodes of struct format:
struct node {
  int data;
  struct node* next;
}

/*
Split a linked list into two constituent lists pointing to pointers passed in by
the user; lists with odd numbers of elements will split with the first list
containing the extra element.
*/

void front_back_split(struct node* source,
                      struct node** frontRef,
                      struct node** backRef) {

  assert(frontRef != NULL && backRef != NULL);

  if(source == NULL) {
    *frontRef = NULL;
    *backRef = NULL;
    return;
  }

  struct node* slow = source;
  struct node* fast = source->next;

  *frontRef = slow; //We know the first list begins with the head of the list.

  if(fast == NULL) {
    *backRef = NULL;
    return;
  }

  while(fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }

  *backRef = slow->next;
  slow->next = NULL;
  return;
}



/*
Cases to consider:
{0}
{0,1}
{0,1,2,3,4}
{0,1,2,3,4,5}
*/
