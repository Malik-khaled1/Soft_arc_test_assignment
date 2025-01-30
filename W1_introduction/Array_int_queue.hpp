#ifndef ARRAY_INT_QUEUE_HPP
#define ARRAY_INT_QUEUE_HPP
// Include header file 
#include "int_queue.hpp"
#define SIZE 10 // Predefined macro for the size of the queue 
// Concrete class: Array_int_queue  
class Array_int_queue: public Int_queue 
{
private:
int rear; // Rear of the queue
int front; // Front of the queue
int count; // Number of elements in queue
int arr[SIZE]; // array queue with SIZE elements

public:
// Constructor
Array_int_queue();
// Destructor
~Array_int_queue() override {}; 


// Overridden enqueue
void enqueue(int) override;
// Overridden dequeue
int dequeue() override;
// Overridden empty
bool empty() const override;
// Overridden full
bool full() const override;
// Gets the number of elements in the queue
int get_num_elements() const;
};
#endif

// Inline function for performance optimization
inline int Array_int_queue::get_num_elements() const {return count;}

