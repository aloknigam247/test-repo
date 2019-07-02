#include <iostream>

void printArray(const int arr[], const int size) {
  for(int i=0; i<size; ++i)
    std::cout << arr[i] << ' ';
  std::cout << '\n';
}

int arrayMinPos(const int arr[], const int size) {
  int min_pos = 0;
  for(int i=0; i<size; ++i)
    if(arr[i] < arr[min_pos])
      min_pos = i;
  return min_pos;
}

void swap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;


}

void mergeSortedArray(int arr1[], const int start1, const int end1,
                      int arr2[], const int start2, const int end2) {

  int i1 = start1,
      i2 = start2;

  while(i1<=end1 && i2<=end2) {
    if(arr1[i1] > arr2[i2]) {
      swap(arr1[i1], arr2[i2]);

    }
    else if(arr1[i1] < arr2[i2]) {

    }
  }
}

int arrayMax(const int arr[], const int size) {
  int max = 0;
  for(int i=0; i<size; ++i)
    if(max < arr[i])
      max = arr[i];
  return max;
}
