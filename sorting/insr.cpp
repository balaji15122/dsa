#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    vector<int> arr(n); // safe, resizable, standard C++
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Applying insertion sort->";
   for(int i=0;i<=n-2;i++){
    int mini=i;
    for(int j=i;j<=n-1;j++){
        if(arr[j]<arr[mini]){
            mini=j;
        }
    }
    int temp=arr[mini];
    arr[mini]=arr[i];
    arr[i]=temp;
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    
}
