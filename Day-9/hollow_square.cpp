#include<iostream>
using namespace std;
int main (){
    int s;
    cout<<"enter the side : ";
    cin>>s;
    for(int i = 1 ; i <= s ; i++){
        if(i==1 || i==s){
            for(int j = s ; j>=1 ; j--){
                cout<<"*";
        }
    }
        else{for(int j = s ; j>=1 ; j--)
            {
                if(j>=2 && j<=s-1)
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
