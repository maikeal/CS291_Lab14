#include "queue.h"

// Default constructor
Queue::Queue(): front(0), rear(0), maxQue(101), items(new std::string[maxQue]) {}

// Destructor
Queue::~Queue() {
    delete[] items; // Frees the memory allocated for the items array
}

// Constructor with parameter
Queue::Queue(int max): front(0), rear(0), maxQue(max + 1), items(new std::string[maxQue]) {}
