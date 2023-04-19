/**
 * CODE BY AJAY O S
 * Implement stack using array in c
 */

#include <stdio.h>
#include <stdlib.h>
#define max 10
int stack[max], top = -1;

void clear_screen() {
  printf("\033[2J");
}
void push() {
    clear_screen();
  int value;
  printf("Enter the value : ");
  scanf("%d", &value);
  if (top == (max - 1)) {
    printf("Error: Stack overflow\n\n\n");
    return;
  }
  top++;
  stack[top] = value;
  printf("%d pushed to stack\n\n\n", value);
}

void pop() {
    clear_screen();
  if (top == -1) {
    printf("Error: Stack underflow\n\n\n");
    return;
  }
  printf("%d popped from stack\n\n\n", stack[top]);
  top--;
}

void peek() {
    clear_screen();
  if (top == -1) {
    printf("Error: Stack is empty\n\n\n");
    return;
  }
  printf("Top element of the stack: %d\n\n\n", stack[top]);
}

void display() {
    clear_screen();
  if (top == -1) {
    printf("Error: Stack is empty\n\n\n");
    return;
  }
  printf("Elements in the stack: ");
  for (int i = top; i >= 0; i--) {
    printf("%d ", stack[i]);
  }
  printf("\n\n\n");
}

void main() {
    int choice;
  do {
    printf("----MENU ----\n");
    printf("1> push\n2> pop\n3> peek\n4> display\n5> exit\n");
    printf("Enter a choice : ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        peek();
        break;
      case 4:
        display();
        break;
      case 5:
        exit(0);
        break;
      default:
        printf("--WRONG ----\n\n\n");
    }
  } while (choice <= 4);
}
