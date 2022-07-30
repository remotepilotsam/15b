//Samuel Bryan
//CIS 1202 800
//July 29th, 2022

#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

template <typename H> 
H halfD(H number1) //double template
{
    return number1 / 2; //round function rounds quotient of double 
}

template <typename H>
H halfF(H number2) //float tempalte
{
    return number2 / 2; //round function rounds quotient of float
}

template <typename H>
H halfI(H number3) //int tempalte
{
    return number3 / 2; //round function rounds quotient of int
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << "*******************************************\n\n";
    cout << halfD(a) << endl; //half of double value
    cout << halfF(b) << endl; //half of float value
    cout << round(halfI(round(c))) << endl; /*half of int value
    ^^The initial result of 3 / 2 was 1.  With the round inside halfI(), it was 1.5 (the correct answer  
    With the round outside halfI(), it is 2, rounded up as the assignment wanted */
    cout << "\n*******************************************\n\n\n";
    system("pause");
    return 0;
}

