#include "queue.h"

// Adds an item to the rear of the queue
void Queue::Enqueue(std::string newItem) {
    if (IsFull())
        throw "Queue is full."; // Throws an exception if the queue is full
    rear = (rear + 1) % maxQue; // Moves rear to the next position
    *(items + rear) = newItem; // Adds the new item to the rear
}

// Removes an item from the front of the queue
void Queue::Dequeue() {
    if (IsEmpty())
        throw "Queue is empty."; // Throws an exception if the queue is empty
    front = (front + 1) % maxQue; // Moves front to the next position
}
