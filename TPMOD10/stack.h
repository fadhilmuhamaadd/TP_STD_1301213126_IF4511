#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

#define top(S) (S).top
#define info(S) (S).info

typedef char infotype;

struct stack{
    infotype info[15];
    int top;
};

void createstack_1301213126(stack &S);
bool isEmpty_1301213126(stack S);
bool isFull_1301213126(stack S);
void push_1301213126(stack &S, infotype x);
int pop_1301213126(stack &S);
void printinfo_1301213126(stack S);

#endif // STACK_H_INCLUDED
