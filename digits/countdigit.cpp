#include<iostream>
using namespace std;
int main(){
    int num=7893;
    while(num>0){
        int last_digit=num%10;
        cout<<last_digit<<endl;
        num=num/10;

    }
}