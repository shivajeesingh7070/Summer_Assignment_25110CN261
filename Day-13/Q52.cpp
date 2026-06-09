// Write a program to Count even and odd elements.

#include <iostream>
using namespace std;
int main(){
    int array[100];
    int num_ele,even_counter=0,odd_counter=0;
    cout<<"enter the number of elements you want in the array\n";
    cin>>num_ele;
    if(num_ele>100){
        cout<<"please enter 100 or below 100\n";
    }
    else if(num_ele<1){
        cout<<"please enter a valid number\n";
    }
    else{
        cout<<"enter the elements of the array"<<endl;
        for(int i = 0 ; i < num_ele ; i++){
            cin>>array[i];
            if(array[i]%2==0){
                even_counter ++;
            }
            else
            odd_counter ++;
        }
        cout<<"the number of even elements are "<<even_counter<<endl<<"the number of odd elements are "<<odd_counter;

    }
    return 0;
}