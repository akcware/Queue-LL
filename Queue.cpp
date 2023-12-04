//
// Created by kadir on 12/4/2023.
//

#include "Queue.h"

void Queue::push(int x) { // O(1)
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node*));
    temp->data = x;
    temp->next = nullptr;

    if (front == nullptr && rear == nullptr) {
        front = temp;
        rear = temp;
        return;
    }

    rear->next = temp;
    rear = temp;
}

void Queue::pop() { // O(1)
    if (front == nullptr) return;
    if (front == rear) {
        front = nullptr, rear = nullptr;
        return;
    }
    front = front->next;
}

void Queue::printOut() { // O(n)
    struct Node* temp = front;

    while (temp->next != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << temp->data << std::endl;
}

int Queue::first() {
    return front->data;
}

int Queue::end() {
    return rear->data;
}