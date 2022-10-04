#include<iostream>
using namespace std;
template<class T>
T maxim( T a,T b)
 {
    return a>b? a:b;

 }
 int main()
 {
    cout<<maxim(15,87)<<endl;
    cout<<maxim(3.9,8.4)<<endl;
    return 0;

 }
