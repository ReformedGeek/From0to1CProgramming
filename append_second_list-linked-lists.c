#include <assert.h>
#include <stdio.h>

struct node {
  int data;
  struct node* next;
}

void append_second_list(struct node** a, struct node** b) {
  assert(a != NULL && b != NULL);

  if(*a == NULL) {
    *a = *b;
    *b = NULL;
    return;
  }

  struct node* head_a = *a
  while(head_a->next != NULL) {
    head_a = head_a->next;
  }

  head_a->next = *b;
  *b = NULL;
  return;
}
