// Write a program to Binary search.

#include <iostream>
using namespace std;
int main()
{
    int n, target;
    cout << "Enter size: ";
    cin >> n;
    int array[n];
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter element to search: ";
    cin >> target;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == target)
        {
            cout << "Element found at index " << mid;
            return 0;
        }
        if (target < array[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << "Element not found";
    return 0;
}