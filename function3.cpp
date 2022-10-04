#include<iostream>
using namespace std;
int maxim(int a,int b)
{
      return a>b ? a:b;

}
float maxim(float a,float b)
{
    return a>b ? a:b;

}
int main()
{
    cout<<maxim(12,13)<<endl;
    cout<<maxim(2.3f,3.8f)<<endl;
    return 0;

}
