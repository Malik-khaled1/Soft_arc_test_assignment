#include<iostream>
#include "list_int_queue.hpp"

// Initialize the list
List_int_queue:: List_int_queue()
{
    front = nullptr; // Front points at nothing >> empty queue/ No queue
    rear = nullptr; // Rear points at nothing >> empty queue/ No queue
}   

// Inserts node in the queue 
void List_int_queue:: enqueue(int val)
{
    // Make a new node
    node* new_node = new node(val);
    
    // Conditional statement
    if(empty())
    {
        front = new_node; // front points at new_node
        rear = new_node; // rear points at new_node
    }
    else
    {
        rear->next = new_node; // rears next points at new_node
        rear = new_node; // Update rear to point at new_node
    }
    
}

// Remove and returns the front element
int List_int_queue::dequeue()
{
    // Conditional statement
    if(empty())
    {
       std::cout << "Queue is empty" << std::endl;
       return -1;
    }
    node* temp = front; // Temperary node, points at front
    int value = temp->data; // Save the value
    front = front->next; // update front to point at the next node
    delete temp; // Delete node

    // Conditional statement: If front points at nothing after dequeue
    if(front == nullptr) 
    {
        rear = nullptr; // rear must also point at nothing: empty queue
    }
    
    return value; // return value 
  
}


// Checks if queue is empty
bool List_int_queue:: empty() const
{
    return front == nullptr; // If and only if front points at nothing
} 

// Checks if queue is full
bool List_int_queue:: full() const
{
    return false; // A dynamic allocated list is never full, unless no more memory
}
// Destructor implementation
List_int_queue::~List_int_queue()
{   
    // looping as long as elements in queue 
    while(front!=nullptr)
    {
        node* temp = front; // Temporary node pointer >> on the front
        front = front->next; // Update front to point at the next node
        delete temp; // Delete allocated memory
    }
}