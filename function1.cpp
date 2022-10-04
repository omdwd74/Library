#include<iostream>
using namespace std;
int main()
{
    float cube(float x);
    float x,y;
    cin>>x;
    y=cube(x);

    cout<<"Volume is equal to ---->"<<y<<endl;
      return 0;



}
float cube(float x)
{

    float n;
    n=x*x*x;
    return n;

}
