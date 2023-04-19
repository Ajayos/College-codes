#include<stdio.h>
#define max 100
int queue[max];
int front = -1, rear = -1;
void insert();
void pop();
void delete();
void firstelement();
void display();

void main() {
	int choice;
	do {
		printf("<<<< Main Menu >>>>");
		printf("\n 1. Insert\n 2. Pop\n 3. First Element\n 4. Delete\n 5. Display\n");
		printf("Enter Your Choice :");
		scanf("%d",&choice);
		switch(choice) {
			case 1: insert();
					break;
			case 2: pop();
					break;
			case 3: firstelement();
					break;
			case 4: delete();
					break;
			case 5: display();
					break;
			default: printf("Enter The Option :");
					break;
		}
	} while(choice<=5);
}

void insert() {
	if(rear==(max-1)) {
		printf("Overflow");
	} else {
		int value;
		printf("Enter The Value To Insert :");
		scanf("%d",&value);
		if(front == -1 && rear == -1) {
			front=rear=0;
		} else {
			rear++;
		}
		queue[rear] = value;
	}
}

void pop() {
	if(front > rear) {
		printf("\nThe Queue Is Empty\n");
	} else {
		//int value;
		printf("The Popped Element Is %d \n",queue[front]);
		front++;
	}
}

void firstelement() {
	if(rear == -1) {
		printf("\nThe Queue Is Empty\n");
	} else {
		printf("The First Element Is %d \n",queue[front]);
	}
}

void delete() {
	if(front == -1) {
		printf("\nThe Queue Is Empty\n");
	} else {
		front = rear = -1;
	}
}

void display() {
	if(front>rear) {
		printf("\nThe Queue Is Empty\n");
	} else {
		printf("\nThe Queue Is\n");
		for(int i=front;i<=rear;i++) {
			printf(" %d ",queue[i]);
		}
		printf("\n");
	}
}
