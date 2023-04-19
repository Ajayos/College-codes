/**
 * CODE BY AJAY O S
 * Convert decimal to binary using stack in c
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack[MAX], top = -1;

void push(int value) {
  if (top == MAX - 1) {
    printf("Error: Stack overflow\n");
    return;
  }
  top++;
  stack[top] = value;
}

int pop() {
  if (top == -1) {
    printf("Error: Stack underflow\n");
    return -1;
  }
  int value = stack[top];
  top--;
  return value;
}

void display(int decimal) {
  while (decimal > 0) {
    int remainder = decimal % 2;
    push(remainder);
    decimal = decimal / 2;
  }

  while (top >= 0) {
    printf("%d", pop());
  }
  printf("\n");
}

void main() {
  int decimal;
  printf("Enter a decimal number: ");
  scanf("%d", &decimal);
  display(decimal);
  //return 0;
}
