#include<iostream>
using namespace std;
int main(){
    int num=7892;
    int rev_num=0;
    while(num>0){
        int last_digit=num%10;
        num=num/10;
         rev_num=(rev_num*10)+last_digit;
    }
    cout<<rev_num;
}