#include <stdio.h>
#include <assert.h>

//Given a sorted linked list of struct format:
struct node {
  int data;
  struct node* next;
}

//Remove duplicates
void remove_duplicates(struct node* source) {
  if(source != NULL){
    return;
  }

  struct node* current = source;
  struct node* next = current->next;

  while(current != NULL && next != NULL) {
    if(current->data == current->next->data) {
      current->next = next->next;
      free(next)
      if (current->next == NULL) {
        break;
      }
    }
    current = current->next;
    next = current->next;
  }

  return;
}
