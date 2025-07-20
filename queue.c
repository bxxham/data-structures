// BSE-05-0132/2024
// BECKHAM MWIRIGI
//GROUP 2

#include <stdio.h>
#define MAX 5
int queue [MAX];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if(rear == MAX - 1) {
        printf("The queue is full.\n");
    } else {
        if(front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("%d has been enqueued\n", value);
    }
    }

    void dequeue() {
        if(front == -1) {
            printf("The queue is empty.\n");
        } else {
            printf("%d has been dequeued\n", queue[front]);
            if(front == rear) {
                front=rear=-1;
            } else {
                front++;
            }
        }
    }

    int main() {
        enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(40);
        enqueue(50);
        enqueue(60);
        dequeue();
        dequeue();
        dequeue();
        dequeue();
        dequeue();
        dequeue();

        return 0;
    }
