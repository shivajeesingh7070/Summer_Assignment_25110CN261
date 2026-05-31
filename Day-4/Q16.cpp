// Write a program to Print Armstrong numbers in a range.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int l, u;
    cout << "Enter the lower limit : ";
    cin >> l;
    cout << "Enter the upper limit : ";
    cin >> u;
    for (int i = l; i <= u; i++) {
        int counter = 0;
        int sum = 0;
        int backup = i;
        int temp;

    //count digits
        int n = i;
        while (n > 0) {
            n = n / 10;
            counter++;
        }

     //calculate Armstrong sum
        n = i;
        while (n > 0) {
            temp = n % 10;
            sum = sum + (int)round(pow(temp, counter));
            n = n / 10;
        }

        if (sum == backup) {
            cout << backup << endl;
        }
    }

    return 0;
}