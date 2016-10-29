#include <stdio.h>
#include <assert.h>

void sorted_insert (struct node** headRef, int data) {
  assert(headRef != NULL);

  if (*headRef == NULL) {
    *headRef = (struct node*)malloc(sizeof(struct node));
    *headRef->data = data;
    *headRef->next = NULL;
    return;
  }

  struct node* prev_node = *headRef;
  struct node* current_node = *headRef;

  while(data > current->data && current_node->next != NULL) {
    prev_node = current;
    current_node = next;
  }

  struct node* new_node = (struct node*)malloc(sizeof(struct node));
  new_node->data = data;

  if(prev_node == current_node) {
    *headRef = new_node;
    new_node->next = current_node;
    return;
  }

  if(current_node->next != NULL && data <= current_node->data) {
    prev_node->next = new_node;
    new_node->next = current_node;
    return;
  }

  if(current_node->next == NULL) {
    current_node->next = new_node;
    new_node->next = NULL;
    return;
  }


}
