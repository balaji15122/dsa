#include<iostream>
using namespace std;

int main() {
    string s = "bbbbbbbbbbbbb";

    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0)
            s[i] = 'a';      
    }
    cout << s << endl;
}
