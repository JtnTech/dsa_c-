#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
             minindex = j;
            }
        }

        swap(arr[i] , arr[minindex]);
    }
}

void printarr(int arr[] , int n)
{
for (int i = 0; i < n; i++)
{
   cout<< arr[i] << endl;
}

}

int main()
{
    int n = 5;
    int arr[] = {2, 4, 5, 3, 8};

    SelectionSort(arr, n);
    printarr(arr, n);
}