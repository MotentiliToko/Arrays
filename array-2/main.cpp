#include <iostream>

using namespace std;

int main()
{
    int first[5], second[5], i, size;
    cout << "enter size value: " << endl;
    cin >> size;
    cout << "input the elements: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> first[size];
    }
    for(int i = 0; i < size; i++) {
        first[size]=second[size];
    }
    cout << "So the array is: " << second[size] << endl;

    return 0;
}