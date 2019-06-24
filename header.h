#ifndef _HEADER_H
#define _HEADER_H

//searching.cc
int linearSearch(const int arr[], const int size, const int key);
int binarySearchIter(const int arr[], const int size, const int key);
int binarySearchRec(const int arr[], const int left, const int right, const int key);

// sorting.cc
void insertionSort(int arr[],const int size);
void selectionSort(int arr[], const int size);
void mergeSort(int arr[], const int start, const int end);

// utils.cc
void printArray(const int arr[], const int size);
int arrayMinPos(const int arr[], const int size);
void swap(int &a, int &b);
void mergeSortedArray(int arr1[], const int start1, const int end1,
                      int arr2[], const int start2, const int end2);

#endif
