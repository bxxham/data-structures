// BSE-05-0132/2024
// BECKHAM MWIRIGI
//GROUP 2

#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int x) {
    if(isFull()) {
    printf("The stack is full\n");
} else {
    top++;
    stack[top] = x;
    printf("%d has been added\n", x);
}
}

void pop() {
    if(isEmpty()) {
        printf("The stack is empty\n");
    } else {
        printf("%d has been removed\n", stack[top]);
        top--;
    }
}

void peek() {
    if(isEmpty()) {
        printf("The stack is empty\n");
    } else {
        printf("%d is on top\n", stack[top]);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    peek();
    pop();
    pop();
    peek();
    pop();
    pop();
    peek();
    pop();
    pop();
    peek();

    return 0;
}

