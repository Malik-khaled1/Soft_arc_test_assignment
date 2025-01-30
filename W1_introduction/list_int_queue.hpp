#ifndef LIST_INT_QUEUE_HPP
#define LIST_INT_QUEUE_HPP

#include "int_queue.hpp"

// Concrete class: list_int_queue
class List_int_queue: public Int_queue
{
    private:
    // Struct node
    struct node
    {
        int data; // Data field
        node* next; // node pointer to the next node

        // Struct constructor
        node(int value) : data(value), next(nullptr) {}
    };

    node* front; // node pointer front of the queue 
    node* rear; // node pointer rear of the queue 

    public:
    // Constructor
    List_int_queue();
    // Destructor
    ~List_int_queue();

    // Inserts data in the queue
    void enqueue(int) override;
    // Removing data from the queue
    int dequeue() override;
    // Checks if empty
    bool empty() const override;
    // checks if full
    bool full() const override;
}; 

#endif
