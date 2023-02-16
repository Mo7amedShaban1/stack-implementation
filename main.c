#include <stdio.h>
#include "stack.h"

void callback(int element)
{
    printf("%d\n", element);
}

int main()
{
    Stack s;

    create_stack(&s);

    printf("Stack size is: %d\n", stack_size(&s));

    push(1, &s);
    push(10, &s);

    printf("Stack size is: %d\n", stack_size(&s));

    traverse_stack(&s, &callback);

    stack_top(&s);
    pop(&s);
    pop(&s);

    clear_stack(&s);

    printf("Stack is Empty: %s\n", is_empty(&s) ? "true" : "false");

    return 0;
}
