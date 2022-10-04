#include<iostream>
using namespace std;
int add(int x,int y,int z)
{
    if(x>y && x>z)
        return x;
        else if (y>z)
        return y;
        else
        return z;


}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<add(a,b,c);

}
