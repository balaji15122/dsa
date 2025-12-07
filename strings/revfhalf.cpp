#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string s;
  cout<<"input string";
  cin>>s;
  cout<<s<<endl;
  int f = s.size();
  reverse(s.begin(),s.begin()+f/2);
  cout<<s;
}