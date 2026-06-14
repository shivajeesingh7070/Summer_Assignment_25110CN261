// Write a program to Remove duplicates from array. 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the size of the array ";
    cin >> n;

    int array[n];
    int array2[n];
    int z = 0;

    cout << "enter the elements of the array ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < i; j++) {
            if(array[i] == array[j]) {
                count++;
            }
        }

        if(count == 0) {
            array2[z] = array[i];
            z++;
        }
    }

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < z; i++) {
        cout << array2[i] << " ";
    }

    return 0;
}