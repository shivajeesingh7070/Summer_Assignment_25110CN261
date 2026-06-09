// Write a program to Find sum and average of array. 

#include <iostream>
using namespace std;
int main(){
    int array[100],num_element,sum_element=0;
    cout<<"how many elements do you want in the array\n";
    cin>>num_element;
        if(num_element<=0){
        cout<<"please enter a valid number of element";
    }
    else{
    if(num_element>100){
        cout<<"please enter under 100";
    }
    else{
        cout<<"enter the elements\n";
        for(int i = 0 ; i<num_element ; i++){
            cin>>array[i];    
        }
        for(int i = 0 ; i<num_element ; i++){
            sum_element=sum_element+array[i];
        }
        cout<<"the sum of the array = "<<sum_element<<endl;
        cout<<"the average of the array = "<<(float)sum_element/(float)num_element;
    }
}
    
    
    return 0;
}