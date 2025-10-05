#include<iostream>
using namespace std;
#include<vector>
int main(){
  int n;
  cout<<"enter the size of array";
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int temp= arr[0];
  for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
  }
  arr[n-1]=temp;
  cout<<"rotated element are:";
  for(int i=0;i<n;i++){
    cout<<arr[i] <<" ";
  }
}