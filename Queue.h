#include <iostream>

class Queue
{

  public:
    Queue();
    Queue(int maxSize);
    ~Queue();

    void insert(char data);
    char remove();
    char peek();
    int isFull();
    int isEmpty();
    int head;
    int tail;
    int mSize;
    int numElements;
    int getSize();
    char *myQueue;

};
