
#include <iostream>

using namespace std;

int main()
{
    double number1, number2, number3, number4, number5; 
    double average;

    cout << "Enter the numbers: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
  
 
    average = (number1 + number2 + number3 + number4 + number5)/5;
    cout << "Average = " << average << endl;

    return 0;
}