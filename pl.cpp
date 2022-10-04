#include<iostream>
using namespace std;
 int main()
 {
    int t,x,y,z;
    cin>>t;
    while(t--){
    cin>>x>>y>>z;
    if((x+y)<=z){
    cout<<"2"<<endl;}
    else if(x<=z && y<=z){
    cout<<"1"<<endl;}
    else{
    cout<<"0"<<endl;}


    }
    return 0;

 }
