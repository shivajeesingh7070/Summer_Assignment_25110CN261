// Write a program to Recursive reverse number.
#include<iostream>
using namespace std;
int revNum(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }

    rev=rev*10+n%10;
    return revNum(n/10,rev);
}

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;

    cout<<"the reverse of "<<n<<" is "<<revNum(n,0);

    return 0;
}