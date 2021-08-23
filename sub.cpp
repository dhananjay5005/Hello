#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, subOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    subOfTwoNumbers = firstNumber - secondNumber;

    // Prints sum 
    cout << firstNumber << " - " <<  secondNumber << " = " << subOfTwoNumbers;     

    return 0;
}