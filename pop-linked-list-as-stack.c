#include <stdio.h>
#include <assert.h>

// Assuming a struct of this format:
struct node {
  int data;
  struct node* next;
};

int pop(struct node** headRef) {
  assert(headRef != NULL);

  if (*headRef != NULL) {
    struct node* next = (*headRef)->next;

    int data = (*headRef)->data;
    (*headRef)->next = NULL;
    free(*headRef);

    *headRef = next;

    return data;
  }

  assert(0);
}
