/* Celina Wong ECE361
HW3 Problem 1 part a
ADT implementation file for SWLL program
*/

#include "SWLL.h" //header file

struct Stack *createStack(){
    struct Stack *stk;
    stk = malloc(sizeof(struct Stack));
    stk->top = NULL;
    return stk;
}

void push(struct Stack *stk, int data){
    struct ListNode *temp;
    temp = malloc(sizeof(struct ListNode));
    if(!temp){
        printf("\nStack/Heap overflow");
        return;
    }
    temp->data = data;
    temp->next = stk->top;
    stk->top = temp;
}

int size(struct Stack *stk){
    int count = 0;
    struct ListNode *temp;
    if(isEmpty(stk))
        return 0;
    temp = stk->top;
    while (temp){
        count++;
        temp = temp->next;
    }
    return count;
}

int isEmpty(struct Stack *stk){
    return stk->top == NULL;
}

int pop(struct Stack *stk){
    int data;
    struct ListNode *temp;
    if(isEmpty(stk))
        return INT_MIN;
    temp = stk->top;
    stk->top = stk->top->next;
    data = temp->data;
    free(temp);
    return data;
}

int peek(struct Stack * stk){
    if(isEmpty(stk))
        return INT_MIN;
    return stk->top->data;
}

void deleteStack(struct Stack *stk){
    struct ListNode *temp, *p;
    p = stk->top;
    while( p) {
        temp = p->next;
        p = p->next;
        free(temp);
    }
    free(stk);
 }
