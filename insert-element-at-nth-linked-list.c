#include <stdio.h>
#include <assert.h>

struct node {
  int data;
  struct node* next;
};

void insert_nth(struct node** headref, int data, int n) {
  assert(headref != NULL);
  assert(n >= 0);
  struct node* newNode = (struct node*)malloc(sizeof(struct node);
  newNode->data = data;

  if (*headref == NULL) {
    newNode->next = NULL;
    (*headref) = newNode;
    return;
  }

  if (n == 0) {
    (*headref) = newNode;
    return;
  }

  int count = 0;
  struct node* currentNode = *headref;
  struct node* previousNode;

  while(count < n && currentNode->next != NULL) {
    ++count;
    previousNode = currentNode;
    currentNode = currentNode->next;
  }

  if (currentNode->next != NULL) {
    newNode->next = currentNode->next;
    previousNode->next = newNode;
    return;
  }

  currentNode->next = newNode;
  return;
}
