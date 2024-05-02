#include <iostream>
#include <string>
#include "queue.h"

using namespace std;

int main() {
    // Create a Queue object to store table numbers
    Queue tableQueue(10);

    try {
        // Enqueue table numbers
        tableQueue.Enqueue("25");
        tableQueue.Enqueue("26");
        tableQueue.Enqueue("27");
        tableQueue.Enqueue("28");
        tableQueue.Enqueue("29");

        // Output table numbers as they are served
        while (!tableQueue.IsEmpty()) {
            cout << "Table number: " << tableQueue.Front() << endl;
            tableQueue.Dequeue();
        }
    } catch (char* exceptionQueue) {
        cerr << exceptionQueue << endl; // Output error message if an exception occurs
    }

    return 0;
}
