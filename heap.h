class Heap {
  int heap_size;
  int max_size;
  public:
    void push(int elem);
    void pop();
    int top();
    int size();
    static void convertHeap(int arr[]);
};
