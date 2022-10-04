#include<iostream>
using namespace std;
int main()
{
   /* int b,c=0;

    int t,i,j,k;
    cin>>t;
    while(t--){
    int a[6];
    for(i=1;i<=6;i++){
        cin>>a[i];
        cout<<a[i];}
        for(i=1;i<=3;i++){
            b=b+a[i];
            cout<<b;
            for( i=6;i<=4;i--){
                c=c+a[i];
                cout<<c;
            }
                }



    if(b==c)
    cout<<"yes";


    }*/
    int t,b=0;
    cin>>t;
    int a[t];
    for(int i=1;i<=t;i++){
    cin>>a[i];
    cout<<a[i];




    }
    for(int i=1;i<=t;i++){
    b=b+a[i];
    cout<<b;


    }
    cout<<b;

}
