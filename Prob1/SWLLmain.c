/* Celina Wong ECE361
HW3 Problem 1 part a
Main() file for SWLL program
*/

#include <stdio.h>
#include "SWLL.h" //header file
#include "SWLL.c" //ADT file

int main(){
   int i = 0;
   struct Stack *stk = createStack();

   for(i = 0; i <= 10; i++){
       push(stk, i);
   }

   printf("Top element is %d\n", peek(stk));
   printf("Stack size is %d\n", size(stk));

   for (i = 0; i <= 10; i++){
       printf("Popped element is %d\n", pop(stk));
   }

   if (isEmpty(stk))
       printf("Stack is empty");
   else
       printf("Stack is not empty");

   deleteStack(stk);
   return 0;
}
