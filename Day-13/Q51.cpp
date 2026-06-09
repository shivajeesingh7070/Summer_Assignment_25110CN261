// Write a program to Find largest and smallest element. 

#include <iostream>
using namespace std;
int main(){
    int array[100];
    int num_ele,small,big;
    cout<<"enter the number of elements you want in the array\n";
    cin>>num_ele;
    if(num_ele>100){
        cout<<"please enter 100 or below 100";
    }
    else if(num_ele<1){
        cout<<"please enter a valid number";
    }
    else{
        cout<<"enter the elements of the array \n";
        cin>>array[0];
        big=array[0];
        small=array[0];
        for(int i = 1 ; i < num_ele ; i++){
            cin>>array[i];
            if(array[i]>big){
                big=array[i];
            }
            if(array[i]<small){
                small=array[i];
            }
            }
            }
            cout<<"the biggest element is "<<big<<endl<<"the smallest element is "<<small;

    
    
    return 0;
        }