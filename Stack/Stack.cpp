#include "Stack.h"
#include <stdexcept>

Stack::Stack() {
    top = nullptr;
    size = 0;
}

Stack::Stack(Node* t) {
    top = t;
    size = 1;
}

void Stack::push(int val) {
    Node* newNode = new Node(val, top);
    top = newNode;
    size++;
}

int Stack::pop() {
    if (size == 0) {
        throw std::runtime_error("stack is empty");
    }
    int retVal = top->getVal();
    Node* newTop = top->getNext();
    delete top;
    top = newTop;
    size--;
    return retVal;
}

int Stack::peek() {
    if (size == 0) {
        throw std::runtime_error("stack is empty");
    }
    return top->getVal();
}

void Stack::freeAll() {
    while (Stack::getSize() > 0) {
        Stack::pop();
    }
}