#include <iostream>
#include "Array_int_queue.hpp"

// Contructor implementation: Initialize front, rear and count
Array_int_queue::Array_int_queue() : rear(0), front(0), count(0) {}

void Array_int_queue::enqueue(int val)
{
    if (full()) // Conditional statement
    {
        std::cout << "Queue is full"<< std::endl;
        abort(); // Exit program
    }

    arr[rear] = val; // insert the value in the queue
    rear = (rear + 1) % SIZE; // Update rear: Cirkular queue
    count++;
}


int Array_int_queue::dequeue()
{
    if (empty()) // Condition statement 
    {
       std:: cout << "Queue is empty" << std::endl;  // Output to the console
       return -1;
    }
    
    int val = arr[front]; // Save the value 
    front = (front + 1) % SIZE; // Update front: Circular queue
    count--; // Reduce the number of elements 

    return val; // Return the dequed value
}

// empty method
bool Array_int_queue:: empty() const
{
    return count == 0; // No elements if count = 0
}


bool Array_int_queue::full() const 
{
    return count == SIZE; // Queue is full if count = SIZE
}

