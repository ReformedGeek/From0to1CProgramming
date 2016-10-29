
// Assuming a struct of this format:
struct node {
  int data;
  struct node* next;
};

void append_data (struct node** headRef, int data) {
  assert(headRef != NULL);
  if (*headRef == NULL) {
    *headRef = (struct node*)malloc(sizeof(struct node));
    (*headRef)->data = data;
    (*headRef)->next = NULL;
    return;
  }

struct node* head = *headRef;
  while(head->next != NULL) {
    head = head->next;
  }

head->next = (struct node*)malloc(sizeof(struct node));
head->next->data = data;
head->next->next = NULL;
}
