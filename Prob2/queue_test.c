/* Celina Wong ECE361
HW3 Problem 2 part b
C module that includes main() to test Queue API in part (a).
*/

#include "queue.h" //header file
#include "queue.c" //ADT file

// main program
int main() {
  // display a greeting and the current working directory
  printf("Test program for Queue ADT by Celina Wong (wcelina@pdx.edu)\n");
  errno = 0;
  char *buf = getcwd(NULL, 0);    // allocates a buffer large enough to hold the path
  if (buf == NULL) {
    perror("getcwd");
    printf("Could not display the path\n");
  }
  else {
    printf("Current working directory: %s\n", buf);
    free(buf);
  }
  printf("\n\n");

	testQueue();
}

void testQueue() {
	printf("======STARTING QUEUE TESTS======\n\n");
	//use this char to test dequeue
	char first = 'c';

	//Add queue enough to fill the queue
	enqueue(first);
	enqueue('g');
	enqueue('t');
	enqueue('Y');
	enqueue('H');
	enqueue('X');
	enqueue('r');
	enqueue('m');
	enqueue('n');
	enqueue('y');
	enqueue('p');	// should fail, queue is full
	enqueue('Z');	// should fail, queue is empty

	if(listQueueContents() == SIZE)
		printf("----List Queue Contents Test Successful\n");
	else
		printf("----List Queue Contents Test Failure\n");

	if(isFull())
		printf("----Queue Full Test Successful\n");
	else
		printf("----Queue Full Test Failure\n");

	if(dequeue() == first)
		printf("----Dequeue Test Successful\n");
	else
		printf("----Dequeue Test Failure\n");

	//empty the queue
	printf("Empty the queue\n");
	for(int i = 0 ; i < SIZE + 1 ; ++i) {
		dequeue();
  }

	printf("Queue should be empty - nothing displayed\n");
	listQueueContents();

	if(isEmpty())
		printf("----Queue Empty Test Successful\n");
	else
		printf("----Queue Empty Test Failure\n");

	printf("---Testing partial fills---\n");
	printf("   Adding p and Z to queue\n");
	enqueue('p');
	enqueue('Z');
	listQueueContents();
	printf("   Removing p\n");
	dequeue();
	listQueueContents();
	printf("   Adding ! to queue\n");
	enqueue('!');
	listQueueContents();
	printf("----Queue Test Complete\n");
}
