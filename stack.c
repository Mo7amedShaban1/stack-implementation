#include <stdio.h>
#include "stack.h"

// Initialize Stack
void create_stack(Stack *ps)
{
    ps->top = 0;
}

void push(int element, Stack *ps)
{
    if (ps->top == STACK_SIZE - 1)
    {
        printf("\nStack Overflow!!");
    }
    else
    {
        ps->entries[ps->top] = element;
        ps->top++;
    }
}

void pop(Stack *ps)
{
    if (ps->top == 0)
    {
        printf("\nStack is Empty!!");
    }
    else
    {
        ps->top--;
    }
}

int is_empty(Stack *ps)
{
    if (ps->top == 0)
    {
        return 1;
    }
    else
    {
        return 1;
    }
}

void stack_top(Stack *ps)
{
    printf("Stack top is: %d\n", ps->entries[ps->top - 1]);
}

int stack_size(Stack *ps)
{
    return ps->top;
}

void clear_stack(Stack *ps)
{
    ps->top = 0;
}

void traverse_stack(Stack *ps, void (*callback)(int element))
{
    int i;

    for (i = ps->top; i > 0; i--)
    {
        callback(ps->entries[i - 1]);
    }
}
