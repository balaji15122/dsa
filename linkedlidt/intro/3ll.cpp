#include<iostream>
#include <vector>
using namespace std;
struct node{
  public:
  int data;
  node*next;

  public:
  node(int data1,node*next1){
    data=data1;
    next=next1;
  }
  public:
  node(int data1){
    data=data1;next=nullptr;
  }
};
node*convertArrToLL(vector<int>&arr){
  node*head=new node(arr[0]);
  node*mover=head;
  for(int i=1;i<arr.size();i++){
    node*temp=new node(arr[i]);
    mover->next=temp;
    mover=temp;
  }
  return head;
}
node*deleteHead(node*head){
  if(head==nullptr){
    return nullptr;
  };
  node*temp=head;
    head=head->next;
    delete temp;
    return head;
  }
  node*deleteTail(node*head){
    if(head==nullptr||head->next==nullptr){
      delete head;
    return nullptr;
  };
  node*temp=head;
  while(temp->next->next!=nullptr){
    temp=temp->next;
  }
  delete temp->next;
  temp->next=nullptr;
  return head;
 }

 node*removeK(node*head,int k){
  if(head==nullptr)return head;
  if(k==1){
    node*temp=head;
    head=head->next;
    free(temp);
    return head;
  }
  int cnt=0;
  node*temp=head;
  node*prev=NULL;
  while(temp!=nullptr){
    cnt++;
    if (cnt==k)
    {
      prev->next=prev->next->next;
      free(temp);
      break;
    }
    prev=temp;
    temp=temp->next; 
  }
  return head;
 }

 node*removeelement(node*head,int el){
  if(head==nullptr)return head;
  if(head->data==el){
    node*temp=head;
    head=head->next;
    delete temp;
    return head;
  }
  node*temp=head;
  node*prev=NULL;
  while(temp!=nullptr){
    if (temp->data==el)
    {
      prev->next=prev->next->next;
      free(temp);
      break;
    }
    prev=temp;
    temp=temp->next; 
  }
  return head;
 }

 node*insertHead(node*head,int val){
  return new node(val,head);
 }

 node*insertTail(node*head,int val){
  if(head==nullptr){
    return new node(val,head);
  }
  node*temp=head;
  while(temp->next!=nullptr){
    temp=temp->next;
  }
  node*newnode=new node(val);
  temp->next=newnode;
  return head;
 }
int main(){
  vector<int>arr={2,1,34,5};
  node*head=convertArrToLL(arr);
  // head=deleteHead(head);
  // head=deleteTail(head);
  // head=removeK(head,3);
  // head=removeelement(head,34);
  // head=insertHead(head,100);
  head=insertTail(head,100);
  node*temp=head;
  while(head!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  // cout<<head->data;
}