#include <iostream>
using namespace std;

int main() {
    int i, flag = 0, n;

    cout << "Enter any Number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is NOT a prime number." << endl;
        return 0;
    }

    for (i = 2; i < n-1; i++) {
        if (n % i == 0) {
            flag = 1;  // divisible → not prime
            break;
        }
    }

    if (flag) {
        cout << n << " is NOT a prime number." << endl;
    } else {
        cout << n << " is a PRIME number." << endl;
    }

    return 0;
}
