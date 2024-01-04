#include <iostream>

using namespace std;

float Add2Values(float, float);

int main()
{
    int x, y;

    cout << "-- Add 2 Values --\n"
         << "Enter x Value: ";

    cin >> x;

    cout << "Enter y Value: ";
    
    cin >> y;

    cout << "__________________";

    return 0;
}

float Add2Values(float x, float y)
{
    float sum = x + y;

    return sum;
}
