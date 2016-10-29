#include <stdio.h>

//Given two sorted linked lists with struct format:
struct node {
  int data;
  struct node* next;
}

//Merge the lists to get a new sorted list with all elements from both lists.
struct node* sorted_merge(struct node* a, struct node* b) {
  if(a == NULL) {
    return b;
  }

  if(b == NULL) {
    return a;
  }

  struct node* newListHead;

  if(a->data <= b->data) {
    newListHead = a;
    a = a->next;
  }
  else {
    newListHead = b;
    b = b->next;
  }
  newListHead->next = NULL;

struct node* curr = newListHead;
  while(a != NULL && b != NULL) {
    if(a->data <= b->data){
      curr->next = a;
      a = a->next;
    }
    else {
      curr->next = b;
      b = b->next;
    }

    curr = curr->next;
  }

  if(a != NULL) {
    curr->next = a;
  }
  else {
    curr->next = b;
  }

  return newListHead;
}
