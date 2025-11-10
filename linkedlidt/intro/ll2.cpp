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

int main(){
  vector<int>arr={2,1,34,5};
  node y=node(arr[2],nullptr);
  cout<<y.data;
}