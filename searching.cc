#include "header.h"

int linearSearch(const int arr[], const int size, const int key) {
  for(int i=0; i<size; ++i)
    if(arr[i] == key)
      return i;
  return -1;
}

int binarySearchIter(const int arr[], const int size, const int key) {
  int left = 0, right = size-1, mid;

  if(key < arr[left] || key > arr[right])
    return -1;

  while(left < right) {
    mid = left + (right-left)/2;
    if(arr[mid] == key)
      return mid;
    if(key < arr[mid])
      right = mid;
    else
      left = mid;
  }
  return -1;
}

int binarySearchRec(const int arr[], const int left, const int right, const int key) {
  int mid = left + (right-left)/2;
  if(key == arr[mid])
    return mid;
  
  if(key < arr[left] || key > arr[right] || left >= right)
    return -1;

  return (key < arr[mid]) 
    ? binarySearchRec(arr, left, mid, key)    // if true
    : binarySearchRec(arr, mid, right, key);  // if false
}
