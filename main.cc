#include <iostream>

#include "header.h"

int main() {
  int arr[6] = {31,41,59,26,41,58};
  printArray(arr, 6);
  selectionSort(arr, 6);
  printArray(arr, 6);
  return 0;
}
