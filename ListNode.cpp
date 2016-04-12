
template <class T>
ListNode<T>::ListNode(){}


template <class T>
ListNode<T>::ListNode(int d)
{
  data = d;
  next = NULL;
  previous = NULL;
}

template <class T>
ListNode<T>::~ListNode()
{
  if(next != NULL)
  {
    delete next;
  }
}
