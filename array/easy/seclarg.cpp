#include<iostream>
using namespace std;
#include<vector>
int main(){
int n;
cout<<"enter the size of array";
cin>>n;
vector<int>arr(n);
cout<<"Enter the elements";
for(int i=0;i<n;i++){
  cin>>arr[i];
}
int largest =arr[0];
for(int i=0;i<n;i++){
  if(arr[i]>largest){
    largest=arr[i];
  }
}
int secondlargest=-1;
for(int i=0;i<n;i++){
  if(arr[i]>secondlargest&&arr[i]!=largest){
    secondlargest=arr[i];
  }
} 
cout<<"Second largest element is:"<<secondlargest;
}