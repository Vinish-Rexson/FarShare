#include <stdio.h>
#define max 5

typedef struct queue{
    int arr[max];
    int front;
    int rear;
}queue;

void init(queue *q){
    q->front=-1;
    q->rear=-1;
}

int isfull(queue *q){
    return q->rear == max-1;
}

int isempty(queue *q){
    return q->rear == -1 && q->front == -1;
}

void insert(queue *q, int val){
    if(isfull(q)){
        printf("Queue Overflow\n");
        return;
    }
    if (q->front == -1){
        q->front = 0;
    }
    q->rear++;
    q->arr[q->rear]=val;
    printf("%d has inseted\n",q->arr[q->rear]);
    return;
}

void Remove(queue *q){
    if(isempty(q)){
        printf("Queue Underflow\n");
        return;
    }
    int x = q->arr[q->front];
    if (q->rear == q->front){
        q->front=-1;
        q->rear=-1;
    }
    else{
        q->front++;
    }
    printf("%d has removed\n",x);
}

void main(){
    queue q;
    init(&q);
    insert(&q,5);
    insert(&q,10);
    insert(&q,15);
    insert(&q,20);
    insert(&q,25);
    insert(&q,30);

    Remove(&q);
    Remove(&q);
    Remove(&q);
    insert(&q,40);
    insert(&q,50);
    insert(&q,60);
    insert(&q,70);
}