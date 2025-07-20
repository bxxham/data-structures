// BSE-05-0132/2024
// BECKHAM MWIRIGI
//GROUP 2

#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int x) {
    if(top == MAX-1) {
        printf("The stack is already full\n");
    } else {
        top++;
        stack[top] = x;
        printf("%d has been added\n", x);
    }
}

void pop() {
    if(top == -1) {
        printf("The stack is empty\n");
    } else {
        printf("%d has been removed\n", stack[top]);
        top--;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    return 0;
}