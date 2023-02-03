#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    if(argc >= 3)
    {
        string filename = argv[1];

        // just like stoi, you can also cast from array-to-integer using atoi
        int number = atoi(argv[2]);
        cout << argv[1] << endl;
    }
    else
    {
        cout << "Input file not provided." << endl;
        return -1;
    }

    bool b = true;
    int x;
    cout << sizeof(b) << endl;
    


    cout << "Hello" << endl;

    cout << argc << endl;

    cout << argv[0] << endl;
    cout << argv[1] << endl;
    cout << argv[2] << endl;
    cout << argv[3] << endl;

    // if(argc >= 1001)
    // {
    //     cout << argv[1000] << endl;
    // }

    return 0;
}