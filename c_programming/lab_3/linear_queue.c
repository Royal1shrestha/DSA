#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 20 // maximum size of the queue

int queue[MAX_SIZE], front = -1, rear = -1;

// function to check if the queue is empty
int isEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}

// function to check if the queue is full
int isFull()
{
    if ( rear == MAX_SIZE - 1)
        return 1;
    else
        return 0;
}

// function to insert an element in the queue
void enqueue(int element)
{
    if (isFull()){
        printf("Queue is full\n");
        exit (0);
    }
    else if (isEmpty())
        front = rear = 0;
    else
        rear = (rear + 1) % MAX_SIZE;
    queue[rear] = element;
}

// function to remove an element from the queue
int dequeue()
{
    int element;
    if (isEmpty()){
        printf("Queue is empty\n");
        return (-1);
    }
    else if (front == rear)
        front = rear = -1;
    else
        front++;
    element = queue[front];
    return element;
}

// Display the queue
void display() {
  int i;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Queue -> ");
    for (i = front; i <= rear; i++) {
      printf("%d ", queue[i]);
    }
  }
}


int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();

    dequeue();
    display();
    dequeue();
    display();

    enqueue(60);
    display();

    return 0;
}
