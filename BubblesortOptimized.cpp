#include<iostream>
using namespace std;
int main(){
    int n,arr[n];
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements to be stored in the Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements stored in the Array before Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}