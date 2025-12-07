#include <iostream>
using namespace std;
int main(){
  int n =100878;
int low=1,high=n;
int ans=0;
while (low<=high){
  int mid=(low+high)/2;
  if (mid*mid<=n)
  {
    ans=mid;
    low=mid+1;
  }else{
    high=mid-1;
  }
}
cout<<"the sqrt of n is::"<<ans;
}

