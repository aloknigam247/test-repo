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
      i2 = start2,
      it = 0,
      s1 = end1 - start1 + 1, // len(arr1)
      s2 = end2 - start2 + 1, // len(arr2)
      *t = new int[ s1<s2 ? 2*s1 : s1+s2 ]; // size of temp array

  // Copy the sorted array into the temp array.
  while(i1 <= end1 && i2 <= end2) {
    if(arr1[i1] <= arr2[i2]) {
      t[it] = arr1[i1];
      ++i1;
    }
    else {
      t[it] = arr2[i2];
      ++i2;
    }
    ++it;
  }

  // if len(arr1) > len(arr2) then only copy content of arr1 into temp
  // Note: no need to copy content of arr2 into temp if len(arr2) > len(arr2)
  if(i1 <= end1) {
    while(i1 <= end1) {
      t[it] = arr1[i1];
      ++i1;
      ++it;
    }
  }

  // Reusing i2 for t array
  i1 = start1;
  i2 = 0;
  while(i1 <= end1) {
    arr1[i1] = t[i2];
    ++i1;
    ++i2;
  }

  // Reusing i1 for arr2 
  i1 = start2;
  while(i2 < it) {
    arr2[i1] = t[i2];
    ++i1;
    ++i2;
  }

  delete t;
}

int arrayMax(const int arr[], const int size) {
  int max = 0;
  for(int i=0; i<size; ++i)
    if(max < arr[i])
      max = arr[i];
  return max;
}
