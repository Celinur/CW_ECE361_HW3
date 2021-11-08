/* Celina Wong ECE361
HW3 Problem 1 part a
Header file for SWLL program
*/

#ifndef SWLL_H
#define SWLL_H

//required libraries in multiple files
#include <stdlib.h>
#include <limits.h>

//struct defs
struct ListNode{
    int data;
    struct ListNode *next;
};

struct Stack{
    struct ListNode *top;
};

//function prototypes
void push(struct Stack *stk, int data);
int size(struct Stack *stk);
int isEmpty(struct Stack *stk);
int pop(struct Stack *stk);
int peek(struct Stack * stk);
void deleteStack(struct Stack *stk);

#endif
