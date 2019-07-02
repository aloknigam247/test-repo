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

void mergeSort(int arr[], const int start, const int end) {

  if(start == end)  // if single element is passed
    return;
  int mid = (end-start)/2;
  mergeSort(arr, start, mid); // left sub-array
  mergeSort(arr, mid+1, end); // right sub-array
  mergeSortedArray(arr, start, mid, arr, mid+1, end);
}

void quickSort(int arr[], const int start, const int end) {
  if(start < end) {
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
  }
}

int partition(int arr[], const int start, const int end) {
  int pivot = start-1,
      i = start;

  while(i<end) {
    if(arr[i] <= arr[end]) {
      ++pivot;
      if(pivot != i)
        swap(arr[pivot], arr[i]);
    }
    ++i;
  }
  ++pivot;
  swap(arr[pivot], arr[end]);

  return pivot;
}

/* Assumption: all values in the array arr are greater than 0 */
void countingSort(int arr[], const int size) {
  int max_size = arrayMax(arr, size);
  int *aux_arr = new int[max_size];
  
  for(int i=0; i<size; ++i)
    aux_arr[arr[i]] = aux_arr[arr[i]] + 1;

  int j=0;
  for(int i=0; i<max_size; ++i) {
    if(aux_arr[i]) {
      while(aux_arr[i]) {
        arr[j] = i;
        j++;
        aux_arr[i] = aux_arr[i] - 1;
      }
    }
  }
  delete[] aux_arr;
}
