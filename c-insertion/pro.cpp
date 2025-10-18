#include <iostream>
using namespace std;

int main() {
    int a[10];
    int n, pos, item1, i;

    cout << "Enter array length: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Current array: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;

    cout << "Enter item to insert: ";
    cin >> item1;

    cout << "Enter position (0-based index): ";
    cin >> pos;

    // shift elements to right
    for (i = n - 1; i >= pos; i--) {
        a[i + 1] = a[i];
    }

    a[pos] = item1; // insert new item
    n = n + 1;

    cout << "Array after insertion: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }

    return 0;
}
