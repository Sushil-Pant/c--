#include <iostream>
using namespace std;

int main() {
    int i = 1;
    
    cout << "Even numbers between 1 and 15 are:\n";
    while (i <= 15) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}