Node* findIntersection(Node* head1, Node* head2)
{
    Node* temp1=head1;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    
    temp1->next=head2;
    temp1=head1;
    set<int>s;
    Node* temp=NULL;
    Node* res= NULL;
    while(temp1!=NULL)
    {
        if(s.find(temp1->data)!=s.end() && temp==NULL)
        {
        //temp is NULL here, hence temp->data makes no sense, that's why we need to create a new Node and then   //   allot it to temp
       Node * newNode=new Node(temp1->data);
       temp=newNode;
        temp->next=NULL;
        res = temp;
        }
        else if(s.find(temp1->data)!=s.end())
        {
        Node* p = new Node(temp1->data);
        temp->next = p;
        temp=temp->next;
        }
        else
        s.insert(temp1->data);
        temp1=temp1->next;
    }
    
    return res;
}
