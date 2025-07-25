#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, nextTerm = 0, count = 1;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    while (count <= n) {
        cout << a << " ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        count++;
    }

    return 0;
}