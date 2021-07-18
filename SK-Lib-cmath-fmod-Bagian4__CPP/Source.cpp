#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    double x = 18.16, result;
    int y = -7;

    result = fmod(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    y = 0;
    result = fmod(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    _getch();
    return 0;
}