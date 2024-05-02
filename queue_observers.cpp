#include "queue.h"

// Checks if the queue is empty
bool Queue::IsEmpty() const {
    return (rear == front); // Queue is empty if rear equals front
}

// Checks if the queue is full
bool Queue::IsFull() const {
    return ((rear + 1) % maxQue == front); // Queue is full if the next position after rear equals front
}

// Gets the item at the front of the queue
std::string Queue::Front() const {
    if (IsEmpty())
        throw "Queue is empty."; // Throws an exception if the queue is empty
    return *(items + (front + 1) % maxQue); // Returns the item at the front of the queue
}
