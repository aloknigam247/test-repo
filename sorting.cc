#include "header.h"

void insertionSort(int arr[], const int size) {
  for(int i=1; i<size; ++i) {
    int j=i-1, key = arr[i];
    for(; j>=0 && arr[j]>key; --j)
      arr[j+1] = arr[j];
    arr[j+1] = key;
  }
}

void selectionSort(int arr[], const int size) {
  for(int i=0; i<size-1; ++i) {
    int min_pos = arrayMinPos(arr+i, size-i) + i;
    if(i != min_pos)
      swap(arr[i], arr[min_pos]);
  }
}

