//Given a linked list of struct format:
struct node {
  int data;
  struct node* next;
}

//Return a list in reversed order.
struct node* reverse(struct node* list) {
  if(list == NULL || list->next == NULL){
    return list;
  }

  struct node* reverseListHead = list;
  struct node* curr = list->next->next;
  struct node* prev = list->next;

  reverseListHead->next = NULL;
  prev->next = reverseListHead;
  reverseListHead = prev;

  while(curr != NULL) {
    prev = curr;
    curr = curr->next;
    prev->next = reverseListHead;
    reverseListHead = prev;
  }

  return reverseListHead;
}
