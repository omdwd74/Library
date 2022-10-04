#include<iostream>
using namespace std;
int sum(int a,int b,int c=0)
{
    return a+b+c;

}
int main()
{
    cout<<sum(45,78)<<endl;

    cout<<sum(10,5,56);
    return 0;

}
