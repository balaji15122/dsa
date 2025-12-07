#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  // string str="balaji yadav";
  // cout<<str;
  // str.push_back('g');
  // str.push_back('g');
  // cout<<str;
  // str.pop_back();
  // str.pop_back();
  // str.pop_back();
  // cout<<str;

  //  +opertor->>used to append
  string s="abc";
  string t="def";
  // s=s+t;
  // cout<<s;
  // reverse
  cout<<s<<endl;
  // reverse(s.begin(),s.end());
  // to reverse some part of string ..jo last elemnt hai uske inde me +1 krke reverse krnenge
  reverse(s.begin(),s.begin()+3);
  cout<<s;


}