#include <iostream>
#include "Stack.h"

using std::cout;

int main() {
    Stack* stack = new Stack();

    stack->push(10);
    stack->push(20);
    stack->push(30);

    cout << stack->peek() << '\n';
    cout << stack->pop() << '\n';
    cout << stack->pop() << '\n';
    cout << stack->pop() << '\n';

    stack->freeAll();
    delete stack;
    return 0;
}