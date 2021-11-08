/* Celina Wong ECE361
HW3 Problem 1 part b
This program evaluates RPN expressions using the refractored stack
implementation created in part (a).
Conditions:
- The operands will be single-digit integers (0, 1, 2, ..., 9).
- The operators are +, -, *, /, and =.
- The = operator causes the top stack item to be displayed.
- The stack should be cleared after the = operator is executed and user
should be prompted to enter another expression.
- Process continues until user enters a character that is not a valid
operator/operand.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "SWLL.h" //header file
#include "SWLL.c" //ADT file

int main() {
  int i;
  char exp[10]; //where the string is stored

  printf("Program for RPN expressions using stack. Celina Wong ECE361.\n"); //intro

  printf("Enter an RPN expression: \n"); //prompt user input
  scanf(" %c", &exp); //scan user input

  struct Stack *stk = createStack(strlen(exp));

  for (i = 0; i < exp[i]; i++); { //scan each character
    if (isdigit(exp[i])) { //check if character is a numerical character
      push(stk, exp[i]); //if so, push to stack
    }
    else { //if not numerical character, then check for operator
      int a = pop(stk);
      int b = pop(stk);

      switch (exp[i]) {
        case '+':
          push(stk, b + a);
          break;
        case '-':
          push(stk, b - a);
          break;
        case '*':
          push(stk, b * a);
          break;
        case '/':
          push(stk, b / a);
          break;
        default:
          printf("Invalid operator/operand.");
          break;
      }
    }

  return 0;
  }
  printf("Value of expression: %d", exp); //prints what is left
  deleteStack(stk);
}
