#ifndef QUEUE_H
#define QUEUE_H

#include <string>

class Queue {
public:
    // Constructors and destructor
    Queue(); // Default constructor
    ~Queue(); // Destructor
    Queue(int max); // Constructor with parameter

    // Observer methods
    bool IsEmpty() const; // Checks if the queue is empty
    bool IsFull() const; // Checks if the queue is full
    std::string Front() const; // Gets the item at the front of the queue

    // Transformer methods
    void Enqueue(std::string newItem); // Adds an item to the rear of the queue
    void Dequeue(); // Removes an item from the front of the queue
private:
    // Private members
    int front; // The front of the queue
    int rear; // The rear of the queue
    int maxQue; // Maximum size of the queue
    std::string* items; // Pointer to dynamically allocated array to store items
};

#endif
