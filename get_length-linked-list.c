#include <stdio.h>

// Assuming a struct of this format:
struct node {
  int data;
  struct node* next;
};

// Find length of the linked list
unsigned int get_length (struct node* head) {
  unsigned int count = 0;
  struct node* current_node = head;
  while(current_node !=NULL) {
    ++count;
    current_node = current_node->next;
  }
  return count;
}

int main() {
  struct node mynode3 = {3, NULL};
  struct node mynode2 = {2, &mynode3};
  struct node mynode1 = {8, &mynode2};
  unsigned int mylength1 = get_length(&mynode1);
  printf("Length of a 3-node node struct is: %d.\n", mylength1);
  unsigned int mylength2 = get_length(NULL);
  printf("Length of a 0-node node struct is: %d.\n", mylength2);
  struct node othernode = {10, NULL};
  unsigned int mylength3 = get_length(&othernode);
  printf("Length of a 1-node node struct is: %d.\n", mylength3);
  return 0;
}
