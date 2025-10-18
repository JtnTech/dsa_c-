#include <iostream>
using namespace std;

int main() {
    int a[20]; // increased size to avoid overflow
    int i, item1, item2, pos, n;

    cout << "Enter length of array: ";
    cin >> n;

    cout << "Enter array elements: \n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Array before insertion: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;

    // Insert an element at end
    cout << "Enter the element you want to add in the end: ";
    cin >> item1;
    a[n] = item1;
    n = n + 1;

    cout << "Array after inserting at end: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
   

    // Insert element at a position
    cout << "Enter the position (0 to " << n << ") where you want to insert: ";
    cin >> pos;

    cout << "Enter the element you want to insert: ";
    cin >> item2;

   for ( i = n-1; i >=pos; i++)
   {
    a[i+1] = a[i];
   }
   a[i] = item2;
   n =n+1;

    cout << "Final array after insertion: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;

    return 0;
}
