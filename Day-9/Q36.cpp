// Write a program to Print hollow square 
// pattern. 
// ***** 
// *   * 
// *   * 
// *   * 
// ***** 

#include<iostream>
using namespace std;
int main (){
    for(int i = 1 ; i <= 5 ; i++){
        if(i==1 || i==5){
            for(int j = 5 ; j>=1 ; j--){
                cout<<"*";
        }
    }
        else{for(int j = 5 ; j>=1 ; j--)
            {
                if(j==2 || j==3 || j==4)
                {
                    cout<<" ";
                    
                }
                else
                cout<<"*";
                
            }
        }
        cout<<endl;
    }
    
    return 0;
}
