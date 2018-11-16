// arrayQ.cpp - implements queue as array
// Qi Guo, 11/15/2018

#include "arrayQ.h"

Queue::Queue() {front = 0; rear = 0; size = 0;} 

void Queue::enqueue(int n) {
    if (isFull())
        throw FullQueue();
    rear = (rear + 1) % CAPACITY;
    data[rear] = n; 
    size++;
}

int Queue::dequeue() {
    if (isEmpty())
        throw EmptyQueue();
    front = (front + 1) % CAPACITY;
    size--;
    return data[front];
}

void Queue::clear() {
    front = 0;
    rear = 0;
    size = 0;
}

bool Queue::isEmpty() const {
    if(size == 0)
        return true;
    else
        return false;
}

bool Queue::isFull() const {
    if(size == CAPACITY)
        return true;
    else
        return false;
}

int Queue::getSize() const {
    return size;
}
