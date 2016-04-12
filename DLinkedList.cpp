#include <iostream>
#include "DLinkedList.h"

template <class T>
DLinkedList<T>::DLinkedList()
{
  size = 0;
  head = NULL;
}

template <class T>
DLinkedList<T>::~DLinkedList()
{
  deleteAllNodes();
}

template <class T>
unsigned int DLinkedList<T>::getSize()
{ return size; }

template <class T>
void DLinkedList::printList()
{
  ListNode *current = head;           // keeps trach of where we are in the list. start at head
  while(current != NULL)
  {
    cout << current->data << endl; // "->" is a pointer.... similar to current.data(). its just different for pointers.
                                  // refrencing the data associated with current
    current = current->next;     // once data is printed, we are now setting current equal to the next thing it is
                                // pointing at
  }
}

template <class T>
void DLinkedList<T>::insertFront(int d)
{
  //create a new node
  ListNode *node = new ListNode(d); // creating a new poiinter to ListNode // setting the next node equal to the head
  if(size == 0)
  {
    back = node;
  }
  else
  {
    front->previous = node;
    node->next = head;
  }
  head = node;
  size++
}

template <class T>
int DLinkedList<T>::removeFront()
{
  ListNode *temp = head;
  if (head->next == NULL)
  { back = NULL; }

  else
  {
    head->next->previous = NULL;
  }
  head = head->next;
  int value = temp->data;
  delete temp;
  --size;
  return val;
}

void DLinkedList<T>::insertBack(int d)
{
  ListNode *node = new ListNode(d);

  if(size == 0)
  { front = node; }
  else
  {
    back->next = node;
    node->previous = back;;
  }
  node = back;
  ++size;
}

int DLinkedList<T>::removeBack()
{
  ListNode *temp = back;
  if(back->previous == NULL) //if the back is also the front
  { head = NULL;} // there is one node in the DLinkedList

  if(back->previous != NULL) // there is somethig in front of the end node
  {
    back->previous->next = NULL; // get rid of the 2nd last pointer to the last node
    back->previous = back; // 2nd to last node is not equal to the back
    back->next = NULL; // delete the pointer to the last node
  }
  --size;
}

template <class T>
ListNode* DLinkedList<T>::remove(int key)
{
  ListNode *current = head;

  while(current->data != key)
  {
    current = current->next;
    if (current == NULL)
    { return NULL; }
  }
  //we found something if we are not in the while loop
  if (current == front) // checking if the current node it equal to the front, if it is, we reassign the next node equal to the front now
  { front = current->next; }

  else
  {
    current->previous->next = current->next;
  }
  if (current == back)
  { back = current->previous; }

  else
  { current->next->previous = current->previous; }

  current->previous = NULL:
  current->next = NULL;

  --size;
  return current;
}

template< class T >
void DLinkedList<T>::deleteAllNodes()
{
        while(head != NULL)
        { removeFront(); }
        return;
}

template< class T >
int DLinkedList<T>::getFront()
{ return front; }

template< class T >
int DLinkedList<T>::getBack()
{ return back; }

template< class T >
bool DLinkedList<T>::isEmpty()
{
  if(size == 0)
  { return true; }
}
