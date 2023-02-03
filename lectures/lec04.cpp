#include <iostream>
using namespace std;

/*
STACKS VS. HEAPS

Stacks:
    - very fast access
    - don't have to explicity free variables
    - space is manages efficiently by CPU
    - memory will not become fragmented
    - local variables only 
    - limit on stack size (OS-dependent)
    - variables cannot be resized

Heaps:
    - variables can be accessed globally
    - no limit on memory size
    - (relatively) slower access
    - no guaranteed effieint use of space, memory may become fragmented over time as blocks of memory are allocated, then freed
    - you must manage memory (you're in charge of allocating and freeing variables)

Tips:
    1. If you need to allocate a large block of memory (ie. a large array, or a big struct), and you need to keep that variables around a long 
    time (like a global), then yo should allocate it on the heap.
    2. If you are dealing with relatively small variables that only need to persist as long as the function using them is alive...(check slides)
    3. No guaranteed efficient use of space, memory may become fragmented over time as blocks of memory are allocated, then freed
    4. You must manage memory (you're in charge of allocating and freeing variables)

// Since stack memory is limited, you should use the 'new' operator when creating objects that need to use lots of memory (like in function foo()).
        // int* B = new int[100];


*/




void foo()
{
    int C[100];
    int* B = new int[100]; // allocated on the heap

    B[0] = 0;
    B[10] = 10;

    // if you don't free the used mamory after using it, then you'll cause memory leakage
    // use the below command to free memory:
    delete[] B; // the delete command should match the data type of the element you want to delete
    B[5] = 8; // doing this will result in a segmentation fault, since you're trying to access deleted memory
    B = nullptr; // this will result in a segmentation fault as well
    return;
}

int main()
{
    // using a variable to allocate the information for size is illegal
        // int size; 
        // cin >> size;
        // int B[size];

    int A[100]; // allocated on a stack frame
    foo(); 

    return 0;
}