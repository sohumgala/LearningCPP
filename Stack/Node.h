#ifndef NODE_H
#define NODE_H

class Node {
private:
    int val;
    Node* next;

public:
    Node(int v, Node* n) {
        val = v;
        next = n;
    }

    int getVal() { return val; }
    Node* getNext() { return next; };

    void setVal(int v) { val = v; }
    void setNext(Node* n) { next = n; }
};
#endif