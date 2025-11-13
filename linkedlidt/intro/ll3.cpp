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

int main(){
  vector<int>arr={2,1,34,5};
  node*head=convertArrToLL(arr);
  node*temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  // cout<<head->data;
}