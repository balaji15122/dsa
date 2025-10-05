#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of array";
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int d;
  cout<<"Enter the number of places to rotate the array";
  cin>>d;
  d=d%n;
  reverse(arr.begin(),arr.begin()+d);
  reverse(arr.begin()+d,arr.end());
  reverse(arr.begin(),arr.end());
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}