#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string testString = "Hello";
    string values[6] = {"Company Name", "4.5", "6.3", "7.9", "6.2", "9.1"};
    double temp[5];

    cout << testString << endl;

    int k = 0;
    for(int i = 1; i < 6; i++)
    {
        temp[k++] = stod(values[i]);
    }

    cout << values[0] << endl;
    for(int k = 0; k < 6; k++)
    {
        cout << temp[k] << endl;
    }
    
    return 0;
}