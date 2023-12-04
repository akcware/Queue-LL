#include <iostream>
#include "Queue.h"

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.printOut(); // 1 2
    q.pop();
    q.printOut(); // 2
    return 0;
}
