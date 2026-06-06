// Write a program to Print character pyramid. 
//     A 
//    ABA 
//   ABCBA 
//  ABCDCBA 
// ABCDEDCBA 

#include<iostream>
using namespace std;
int main(){
    int a=4;
    for(int i = 1 ; i <= 5 ; i++){
        for(int j=a;j>=1;j--){
            cout<<" ";
        }
        for(int k = 1 ; k<=(2*i-1)/2; k++){
            cout<<char('A'+k-1);
        }
        for(int k = (2*i-1)/2+1 ; k>=1; k--){
            cout<<char('A'+k-1);
        }
        a--;
        cout<<endl;
    }
    return 0;
}