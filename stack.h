/* The #define directive allows the definition of macros within your source code.
These macro definitions allow constant values to be declared for use throughout your code. */
#define STACK_SIZE 5

typedef struct Stack
{
    int top;
    int entries[STACK_SIZE];
} Stack;

void create_stack(Stack *s);

void push(int element, Stack *ps);

void pop(Stack *ps);

int is_empty(Stack *ps);

void stack_top(Stack *ps);

int stack_size(Stack *ps);

void clear_stack(Stack *ps);

void traverse_stack(Stack *ps, void (*callback)(int element));