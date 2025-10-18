#include <iostream>
using namespace std;

int main()
{
    char num = 'A';
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl; // for next line
    }

    cout << "After End Num is: " << num;

    return 0;
}