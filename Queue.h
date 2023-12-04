//
// Created by kadir on 12/4/2023.
//

#ifndef QUEUE_LINKEDLIST_QUEUE_H
#define QUEUE_LINKEDLIST_QUEUE_H

#include <iostream>

struct Node {
    int data;
    struct Node* next;
};

class Queue {
private:
    struct Node* front = nullptr;
    struct Node* rear = nullptr;
public:
    void push(int x);
    void pop();
    void printOut();
    int first();
    int end();
};


#endif //QUEUE_LINKEDLIST_QUEUE_H
