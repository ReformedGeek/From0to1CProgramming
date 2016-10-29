#include <stdio.h>
#include <assert.h>

//Given a pair of linked lists with struct formats of:
struct node {
  int data;
  struct node* node;
}

//Move a node from the head of one list to the head of the other.

void move_node(struct node** sourceRef, struct node** destRef) {
  assert(sourceRef != NULL && destRef != NULL);
  if(*sourceRef == NULL) {
    return;
  }

  struct node* placeholder = *sourceRef;
  *sourceRef = (*sourceRef)->next;
  placeholder->next = *destRef;
  *destRef = placeholder;
  return;
}
