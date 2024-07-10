#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    // assume first element is pivot
    int pivot = arr[s];
    // Count all the element which is less than or equal to pivot
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // Place pivot at right palace
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // Left and Right part solve karne ke liye condition
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // Base Case
    if (s >= e)
        return;

    // Partitioning

    int p = partition(arr, s, e);

    // Recursive Call

    // Left Part
    quickSort(arr, s, p - 1);

    // Right Part
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[10] = {1, 6, 2, 7, 5, 4, 11, 9, 13, 12};

    int size = 10;

    quickSort(arr, 0, size - 1);

    cout << "Array after sorting using Quick Sort is :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}