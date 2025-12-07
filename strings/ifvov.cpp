#include<iostream>
using namespace std;
int main(){
  string s="Balaji Yadav";
  int count=0;
  int i=0;
  while(s[i]!='\0'){
    if(s[i] == 'a' || s[i]=='u' || s[i]=='o' || s[i]=='i' || s[i]=='e')count++;
    i++;
  }
  cout<<count;
}