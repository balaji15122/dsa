#include<iostream>
using namespace std;
#include<vector>
int main(){
  int n;
  cout<<"enter the size of array";
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the elements";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int i=0;
  for(int j=1;j<n;j++){
    if(arr[i]!=arr[j]){
      i++;
      arr[i]=arr[j];
    }
  }
  cout<<"total number of unique elements are:"<<i+1;
}