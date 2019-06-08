void insertionSort(int arr[], const int size) {
  for(int i=1; i<size; ++i) {
    int j=i-1, key = arr[i];
    for(; j>=0 && arr[j]>key; --j)
      arr[j+1] = arr[j];
    arr[j+1] = key;
  }
}
