#include <stdio.h>
#define QUEUESIZE 5

int queue[QUEUESIZE] = { 0, };
int rear = -1, front = -1;
int enqueue(int data) {
    if (rear == QUEUESIZE - 1) {
        printf("queue is full!");
    }
    else
        queue[++rear] = data;
}
int dequeue(void) {
    if (rear == -1 && front == -1) {
        printf("queue is empty!");
    }
    else
        return queue[++front];
    return 0;
}
int main(void) {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    return 0;
}