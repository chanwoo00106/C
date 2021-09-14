#include <stdio.h>
#define MAX_SIZE 5

typedef struct {
	int queue[MAX_SIZE];
	int front, rear;
}QueueType;

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init(QueueType* q) {
	q->front = q->rear = 0;
}

void enqueue(QueueType* q, int item) {
	if ((q->rear + 1) % MAX_SIZE == q->front) error("큐가 포화상태입니다.");
	q->rear = (q->rear + 1) % MAX_SIZE;
	q->queue[q->rear] = item;
}

int dequeue(QueueType* q) {
	if (q->front == q->rear) error("큐가 공백 상태입니다");
	q->front = (q->front + 1) % MAX_SIZE;
	return q->queue[q->front];
}

int main(void) {
	QueueType q;
	init(&q);
	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);
	enqueue(&q, 4);
	//enqueue(&q, 5);
	printf("%d\n", dequeue(&q));
	printf("%d\n", dequeue(&q));
	printf("%d\n", dequeue(&q));
}