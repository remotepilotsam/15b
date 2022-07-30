//Samuel Bryan
//CIS 1202 800
//July 29th, 2022

#include <iostream>
#include <cctype>
using namespace std;

template <typename H> //Template to divide all values
H half(H number)
{
    if (isdigit(number))
    {
        return number / 2;
    }
    else
    {
        return number / 2;
    }
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    
    cout << "*******************************************\n\n";
    cout << half(a) << endl; //half of double value
    cout << half(b) << endl; //half of float value
    cout << half(c) << endl; //half of int value
    cout << "\n*******************************************\n\n\n";
    system("pause");
    return 0;
}

