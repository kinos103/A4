

ListNode::ListNode(){}
ListNode::ListNode(int d)
{
  data = d;
  next = NULL;
  previous = NULL;
}

ListNode::~ListNode()
{
  if(next != NULL)
  {
    delete next;
  }
}
