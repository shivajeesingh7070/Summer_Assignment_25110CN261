// Write a program to Print star pyramid. 
//     * 
//    *** 
//   ***** 
//  ******* 
// ********* 
// USING STRING(N,SPACE)
// #include<iostream>
// using namespace std;
// int main(){
//     int i,n=4;
//     char space=' ';
//     for(i = 1 ; i <= 5 ; i++){
//         cout<<string(n,space);
//         for(int j = 1 ; j <= 2*i-1 ; j++){                         //string(n,space)
//             cout<<"*";
//         }
//         cout<<string(n,space);
//         cout<<endl;
//         n--;
//     }
//     return 0;
// }

// USING LOOPS

#include<iostream>
using namespace std;
int main(){
    int a=4;
    for(int i = 1 ; i <= 5 ; i++){
        for(int j=a;j>=1;j--){
            cout<<" ";
        }
        for(int k = 1 ; k<=2*i-1; k++){
            cout<<"*";
        }
        a--;
        cout<<endl;
        }
    return 0;
}
