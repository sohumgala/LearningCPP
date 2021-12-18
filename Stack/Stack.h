#ifndef STACK_H
#define STACK_H
#include "Node.h"

class Stack {
private:
    Node* top;
    int size;

public:
    Stack();
    Stack(Node* t);

    Node* getTop() { return top; }
    int getSize() { return size; }

    // main stack behaviors
    void push(int val);
    int pop();
    int peek();

    // free all dynamically allocated memory
    void freeAll();
};

#endif