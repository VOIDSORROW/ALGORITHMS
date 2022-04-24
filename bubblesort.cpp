// This sorting method has the Time complexity of O(n^2)
#include <bits/stdc++.h>
using namespace std;
  
// void swap(int *xp, int *yp) 
// { 
//     int temp = *xp; 
//     *xp = *yp; 
//     *yp = temp; 
// } 
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                //swap(&arr[j], &arr[j+1]);
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }    
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
int main() 
{ 
    int arr[] = {12, 84, 112, 22, 60, 32, 49}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    cout<<"Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
}