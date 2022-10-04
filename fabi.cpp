#include<iostream>
using namespace std;
int main()
{
    int n,first,second,third;
    first=0;
    second=1 ;
    cout<<"Enter the n terms of series"<<endl;
    cin>>n;
    cout<<"Fibonacci series"<<endl<<first;

    for(int i=2;i<n;i++)
    {
       third=first+second;
       cout<<" "<<third;
       first=second;
       second=third;


    }
    return 0;



}
