#include <stdio.h>

// Assuming a struct of this format:
struct node {
  int data;
  struct node* next;
};

// Get the nth element in a linked list.
// Return NULL if index is out of bounds.

struct node* get_nth(struct node* head, int n) {
  if (n < 0) {
    return NULL;
  }

  int i = 0
  while (head != NULL && index < n) {
    ++i;
    head = head->next;
  }

  return head;
}
