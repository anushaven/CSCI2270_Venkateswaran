/*
Arrays as Parameters
- when you pass an array (by value) to a function, the address to the memory chunk storing the array gets passed
- it means that teh nivoked function can change the vlaues stored at individual indices.
- however, if you need to change the structure of the array itself, it can not be done if you are passing by value
- if you wish to modify the strucure of the array, you need to pass it by pointers

-------------
Abstract Data Types
1. Abstraction. Hiding low-level details with a simpler higher-level idea
2. Modularity. Dividing a system into modules where each module can be separately designed, imlemented, and tested.
3. Encapsulation. Building walls around the functionality of a module such that bugs in other parts can not damage its integrity, and correctness of the module is its own responsibilityu
4. Infomation hiding. Hiding implementation details of a module form the rest of the system, so that those dtails can be change dwithout requiring to change the rest of the system.
5. Separation of concerns. Making each ...

A type is characterized by the operatons that you can perform on it:
    - an integer is something that you can add, and multiply; 
    - a string is something that you can concatenate and find substrings of;
    - a boolean is something that you can negate
    - a *list* is a linearly-ordered sequence of elements where you can add, remove, or get elements, and compute its size
    - a astack is something that you can push a nwe element on its top, pop an element from the top, check its emptiness, and so on
ADT specification hides...from its users.

-------------
Classes in C++
- Access level: public, private (default), and protected
- Public members can be accessed out of the class (the interface)
- Private members can only be accessed from within the class (data-hiding)

Constructor: 
    List();
Destructor: 
    -List(); (negative sign, not a dash)



*/