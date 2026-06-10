// // Write a program to Second largest element. 

// #include <iostream>
// using namespace std;
// int main(){
//     int n,second_largest,largest,temp;
//     cout<<"enter the size of the array\n";
//     cin>>n;
//     int array[n];
//     cout<<"enter the element of the array\n";
//     cin>>array[0];
//     largest = array[0];
//     cin>>array[1];
//     second_largest=array[1];
//     for(int i = 2 ; i < n ; i++){
//         cin>>array[i];
//         if(largest<second_largest){
//             temp=second_largest;
//             second_largest=largest;
//             largest=temp;
//             if(array[i]>largest){
//                 second_largest=largest;
//                 largest=array[i];
//             }
//             else if(array[i]>second_largest){
//                 second_largest=array[i];
//             }
//         }
//         else{
//             if(array[i]>largest){
//                 second_largest=largest;
//                 largest=array[i];
//             }
//             else if(array[i]>second_largest){
//                 second_largest=array[i];
//             }
        
//         }
//     }
//     cout<<"the second largest element is "<<second_largest;
//     return 0;
// }

//IMPROVED CODE

#include <iostream>
using namespace std;
int main(){
    int n,second_largest,largest,temp;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the element of the array\n";
    cin>>array[0];
    largest = array[0];
    cin>>array[1];
    second_largest=array[1];
    if(largest<second_largest){
        temp=second_largest;
        second_largest=largest;
        largest=temp;
    }
    for(int i = 2 ; i < n ; i++){
        cin>>array[i];
            if(array[i]>largest){
                second_largest=largest;
                largest=array[i];
            }
            else if(array[i]>second_largest){
                second_largest=array[i];
            }
        
    }
    cout<<"the second largest element is "<<second_largest;
    return 0;
}