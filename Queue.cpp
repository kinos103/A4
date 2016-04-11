#include <iostream>
#include "Queue.h"

template <class T>
Queue<T>::Queue(){}

template <class T>
Queue<T>::Queue(int maxSize)
{
   myQueue = new T[maxSize];
   mSize = maxSize;
   head = 0;
   tail = -1;
   numElements = 0;
}

template <class T>
Queue<T>::~Queue() { delete [] myQueue; }

template <class T>
void Queue<T>::insert(T data) //adding from the back //aka en-queue
{
  //making this a circular queue
  if (tail == mSize-1) // still need to check if it is full before resetting tail / see remove
  { tail = -1; }
  ///***
  myQueue[++tail] = data;
  numElements++;
}

template <class T>
T Queue<T>::remove() //de-queue // from the front
{
  T c = '\0';
  c = myQueue[head++];

  if(head == mSize)
    head = 0;

  --numElements;
  return c;
}

template <class T>
T Queue<T>::peek() //big0 - constant run time
{ return myQueue[head]; }

template <class T>
int Queue<T>::isFull()
{ return (numElements == mSize); }

template <class T>
int Queue<T>::isEmpty()
{ return (numElements == 0); }

template <class T>
int Queue<T>::getSize()
{ return numElements; }
