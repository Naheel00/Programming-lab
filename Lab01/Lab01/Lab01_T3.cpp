/*
* Lab: Lab01 - T3
* Name: Naheel Badar
* Roll No: 02
* Date: 24-11-2026
* Purpose: finding 5 bugs
*/
#include <iostream>
using namespace std;  // BUG 1 (colon; is missing at the end)

int main()
{
    cout << "Welcome to the Lab!" << endl; // BUG 2 (colon is again missing after endl)
    cout << "Today we learn \"C++\"." << endl; // BUG 3 ( Cpp is case senstive so correct is cout not Cout)
    cout << "Files are in C:\\Lab01" << endl; // BUG 4: single \ should be \\ otherewise it predict that \Lab is a secial escape seq.)
    cout << "Bye!" << endl; // BUG 5 (double quotation " is missing after Bye!)
    return 0;
}
