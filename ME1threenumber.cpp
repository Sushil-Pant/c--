#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Nested if-else to find the greatest
    if (a > b) {
        if (a > c)
            cout << a << " is the greatest." << endl;
        else
            cout << c << " is the greatest." << endl;
    } else {
        if (b > c)
            cout << b << " is the greatest." << endl;
        else
            cout << c << " is the greatest." << endl;
    }

    return 0;
}