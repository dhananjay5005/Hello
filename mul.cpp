#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, multOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    multOfTwoNumbers = firstNumber * secondNumber;

    // Prints sum 
    cout << firstNumber << " * " <<  secondNumber << " = " << multOfTwoNumbers;     
 // Prints sum 
    return 0;
}