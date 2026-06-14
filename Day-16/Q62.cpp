// Write a program to Find maximum frequency element. 

#include <iostream>
using namespace std;
int main(){
    int n,max_freq,corresponding;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];
    int counter[n];
    cout<<"enter the elements of the array\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        counter[i]=0;
        for(int j=0;j<n;j++){
            if(array[i]==array[j]){
                counter[i]++;
            }
        }

    }
    max_freq=counter[0];
    corresponding=0;
    for(int i = 1 ; i<n ;i++){
        if(counter[i]>max_freq){
            max_freq=counter[i];
            corresponding=i;
        }
    }
    cout<<"the maximum frequency element is "<<array[corresponding]<<" and it repeated "<<counter[corresponding]<<" number of times";
    

    return 0;
}