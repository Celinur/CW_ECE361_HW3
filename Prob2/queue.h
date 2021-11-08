/* Celina Wong ECE361
HW3 Problem 2 part a
Header file for Queue module
*/

#ifndef QUEUE_H
#define QUEUE_H

//required libraries in multiple files
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>


//function prototypes
void testQueue();
int enqueue(char d);
char dequeue(void);
int isEmpty(void);
int isFull(void);
int listQueueContents(void);

#endif
