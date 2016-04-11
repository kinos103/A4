#include <iostream>

template <class T>
class Queue
{

  public:
    Queue();
    Queue(int maxSize);
    ~Queue();

    void insert(T data);
    T remove();
    T peek();
    int isFull();
    int isEmpty();
    int head;
    int tail;
    int mSize;
    int numElements;
    int getSize();
    T *myQueue;

};
