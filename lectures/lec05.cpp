#include <iostream>
using namespace std;


/* NOTES

- The variable x in main and x in the parameter 
    of the function are stored in two different memory addresses
- To reflect values in the main from a function parameter, you need to pass by pointer/reference, not value
    -  You can't pass arrays by value, only by pointer/reference

*/
void change(int x)
{
    x = 100;
}

void by_ptr(int *px)
{
    *px = 100;
}

void by_ref(int &x)
{
    x = 100;
}

void arrByValue(int A[])
{
    for(int i =0; i < 10; i++)
    {
        A[i] = i;
    }
}

void arrayDouble(int *oldArr, int &capacity) // since we are now passing the memory address of capacity, it will reflect in the main function
{
    int *newArr = new int[2*capacity];

    for(int i = 0; i < capacity; i++)
    {
        newArr[i] = oldArr[i];
    }
    for(int i = capacity; i < 2*capacity; i++)
    {
        newArr[i] = rand()%10;
    }
    oldArr = newArr;
    capacity = 2*capacity;
}


int main()
{

    int capacity = 10;

    // int B[10]; // on stack (static allocation)
    int* B = new int[capacity]; // on heap (dynamic allocation)
    for(int i = 0; i < capacity; i++)
    {
        B[i] = i;
    }

    arrayDouble(B, capacity);
    for(int i = 0;i < 10; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    // You now need to free up the memory used by array B
    delete[] B;
    B = nullptr; // this is a fallback
    arrByValue(B);

    int x = 42; 
    // change(x);
    // by_ptr(&x); // after this, x should print as 100, since the by_ptr(int*) function modifies it by address
    // by_ref(x); // after this, x should also print as 100, since by_ref(int&) is still accessing the same memory address

    cout << "x =" << x << endl;

    return 0;
}