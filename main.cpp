#include <iostream>

using namespace std;

int Add2Values(int, int);

int main()
{
    float x, y;

    cout << "-- Add 2 Values --\n"
         << "Enter x Value: ";

    cin >> x;

    cout << "Enter y Value: ";
    
    cin >> y;

    cout << "__________________";

    return 0;
}

int Add2Values(int x, int y)
{
    float sum = x + y;

    return sum;
}
