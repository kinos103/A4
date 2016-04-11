#include <iostream>
template <class T>
class DLinkedList
{
  private:
      ListNode *head;
      ListNode *back;
      unsigned int size;

  public:
    DLinkedList();
    ~DLinkedList();

    void insertFront(int data);
    void insertBack(int d);
    void printList();

    int removeFront(); //dont need??
    int removeBack(); //dont need??
    void deleteAllNodes();

    ListNode* remove(int key); // ???

    int getFront();
    int getBack();

    unsigned int getSize(); // unsigned because size will never be negitive // and will also have fixed size
                           //  depending on the number in the first line of the txt document ?

    bool isEmpty();
};
