// Write a program to Reverse array. 
 #include <iostream>
 using namespace std;
 int main(){
    int n,temp;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the elements of the array\n";
    for(int i = 0 ; i < n ; i++ ){
        cin>>array[i];
    }
    int z = n-1;
    for(int i = 0 ; i < n/2 ; i++){
        temp=array[i];
        array[i]=array[z];
        array[z]=temp;
        z--;
    }
    for(int i = 0 ; i < n ; i++ ){
        cout<<array[i]<<endl;
    }
    
    
 }