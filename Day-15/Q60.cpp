// // Write a program to Move zeroes to end.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the size of the array\n";
//     cin >> n;
//     int array[n],temp;
//     cout << "enter the elements of the array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (array[i] == 0)
//         {   temp=array[i+1];
//             array[i+1] = array[i];
//             array[i]=temp;
//         }
//     }
//     for(int i = 0 ; i < n ; i++ ){
//         cout<<array[i]<<endl;
//     }
//     return 0;
// }

//NEW METHOD(GOOD ONE)

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the elements of the array\n";
    for(int i = 0 ; i < n ; i++ ){
        cin>>array[i];
    }
    int array2[n];
    int z = 0;
    for(int i = 0 ; i < n ; i++ ){
        if(array[i]!=0){
            array2[z]=array[i];
            z++;
        }
    }
    for(z ; z < n ; z++){
        array2[z]=0;
    }
    for(int i = 0 ; i < n ; i++ ){
        cout<<array2[i]<<endl;
    }
    return 0;
}