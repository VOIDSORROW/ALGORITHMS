#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
  int i = l;
  int j = m + 1;
  int k = l;

  /* create temp array */
  int temp[5];

  while (i <= m && j <= r) {
    if (arr[i] <= arr[j]) {
      temp[k] = arr[i];
      i++;
      k++;
    } else {
      temp[k] = arr[j];
      j++;
      k++;
    }

  }

  /* Copy the remaining elements of first half, if there are any */
  while (i <= m) {
    temp[k] = arr[i];
    i++;
    k++;

  }

  /* Copy the remaining elements of second half, if there are any */
  while (j <= r) {
    temp[k] = arr[j];
    j++;
    k++;
  }

  /* Copy the temp array to original array */
  for (int p = l; p <= r; p++) {
    arr[p] = temp[p];
  }
}

/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // find midpoint
    int m = (l + r) / 2;

    // recurcive mergesort first and second halves 
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // merge
    merge(arr, l, m, r);
  }
}

int main() {
  int myarray[5];
  //int arr_size = sizeof(myarray)/sizeof(myarray[0]);
  int arr_size = 5;

  cout << "Enter 5 integers in any order: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarray[i];
  }
  cout << "Before Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }
  cout << endl;
  mergeSort(myarray, 0, (arr_size - 1)); // mergesort(arr,left,right) called

  cout << "After Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }

  return 0;
}
































// #include <iostream>
// using namespace std;
// void merge(int arr[], int p, int q, int r) {
//   int n1 = q - p + 1;
//   int n2 = r - q;

//   int L[n1], M[n2];

//   for (int i = 0; i < n1; i++)
//     L[i] = arr[p + i];
//   for (int j = 0; j < n2; j++)
//     M[j] = arr[q + 1 + j];
//   int i, j, k;
//   i = 0;
//   j = 0;
//   k = p;
//   while (i < n1 && j < n2) {
//     if (L[i] <= M[j]) {
//       arr[k] = L[i];
//       i++;
//     } else {
//       arr[k] = M[j];
//       j++;
//     }
//     k++;
//   }
//   while (i < n1) {
//     arr[k] = L[i];
//     i++;
//     k++;
//   }

//   while (j < n2) {
//     arr[k] = M[j];
//     j++;
//     k++;
//   }
// }
// void mergeSort(int arr[], int l, int r) {
//   if (l < r) {
//     int m = l + (r - l) / 2;
//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);
//     merge(arr, l, m, r);
//   }
// }
// void printArray(int arr[], int size) {
//   for (int i = 0; i < size; i++)
//     cout << arr[i] << " ";
//   cout << endl;
// }
// int main() {
//   int arr[] = {60, 10, 50, 30, 40};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   mergeSort(arr, 0, size - 1);
//   cout << "Sorted array: \n";
//   printArray(arr, size);
//   return 0;
// }