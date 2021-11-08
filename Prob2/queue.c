/* Celina Wong ECE361
HW3 Problem 2 part a
This module encapsulates the functionality of a Queue of char and is
implemented as a circular array of 10 elements and includes the
following functions:
-int enqueue(char d)
-char dequeue(void)
-int isEmpty(void)
-int isFull(void)
-int listQueueContents(void)
*/

#include "queue.h" //header files
#define SIZE 10
int items[SIZE];
int front = -1, rear = -1;

int enqueue(char d) { //inserts char d at end of queue.
  if(isFull()) { //checks if queue is full
    printf("Queue overflow.\n");
    return 1;
  }
  else {
    if (front == -1) {
      front = 0;
      rear = (rear +1) % SIZE;
      items[rear] = d;
      printf("\nInserted: %c\n", d);
    }
  return 0;
  }
}

char dequeue() { //returns char on front of queue and deletes from queue
  int d;
  if(isEmpty()) { //checks if queue is empty
    printf("Queue is empty.\n");
    return 1;
  }
  else {
    d = items[front];
    if (front == rear) {
      front = rear = -1;
    }
    else {
      front = (front + 1) % SIZE;
    }
    return d;
  }
}

int isEmpty() { //returns 1 if queue is empty, otherwise return 0
  if (front == -1) {
    return 1;
  }
  return 0;
}

int isFull(void) {  //returns 1 if queue is full, otherwise return 0
  if ((front == rear + 1) || ((front == 0) && (rear == SIZE - 1))) {
    return 1;
  }
  return 0;
}

int listQueueContents(void) { //display contents
  int i;
  if (isEmpty()) { //checks if empty
    printf("Empty queue.\n");
    return 1;
  }
  else {
    printf("Queue elements: \n");
    for (i = front; i <= rear; i++) {
      printf("%d ", items[i]);
    }
    return 0;
  }
}
