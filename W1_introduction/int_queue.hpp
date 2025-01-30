// Define Makroes
#ifndef INT_QUEUE_HPP 
#define INT_QUEUE_HPP

// Abstract Class: integer queue
class Int_queue
{
// Public methods
public:

// Abstract method: enqueue
virtual void enqueue(int) = 0;

// Abstract method: dequeue
virtual int dequeue() = 0; 

// Abstract method: empty
virtual bool empty() const = 0;

// Abstract method: full
virtual bool full() const = 0;


// Abstract deconstructor
virtual ~Int_queue() {}

};

#endif
