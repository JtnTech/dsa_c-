#include <iostream>
using namespace std;

int main() {
    int n , pos , set1;                // number of elements
    int arr[10];          // array of size 10 (fixed)

    cout << "Enter number of elements (max 10): ";
    cin >> n;

    // Input elements
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];    // store input in arr[i]
    }

    // Print elements
    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << 'enter a position to set bit: ';

    cin >> pos;

    // Set the bit at the given position
    set1 = 1 << pos;  // Create a mask with the bit at 'pos' set to 1
    cout << "Setting bit at position " << pos << ": " << set1 << endl;
    return 0;
}
