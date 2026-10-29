#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(int i) {
  if (is_full()) {
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
  } else
    contents[top++] = i;
}

int pop() {
  if (is_empty()) {
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
  } else
    return contents[--top];
}

int main() {
  char ch;
  int op1, op2;

  for (;;) {
    printf("Enter an RPN expression: ");
    make_empty();

    while (scanf(" %c", &ch) == 1) {
      if (ch >= '0' && ch <= '9') {
        push(ch - '0');
      } else {
        switch (ch) {
        case '+':
          push(pop() + pop());
          break;
        case '-':
          op2 = pop();
          op1 = pop();
          push(op1 - op2);
          break;
        case '*':
          push(pop() * pop());
          break;
        case '/':
          op2 = pop();
          op1 = pop();
          push(op1 / op2);
          break;
        case '=':
          printf("Value of expression: %d\n", pop());
          if (!is_empty()) {
            printf("Not enough operators\n");
          }
          goto next_expr;
        default:
          exit(EXIT_SUCCESS);
        }
      }
    }
  next_expr:;
  }
  return 0;
}
