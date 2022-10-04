#include<iostream>
using namespace std;
int main(){
    int A[3][3];
    int B[3][3];
    int C[3][3];
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
        cout<<"a"<<i<<j<<endl;
        cin>>A[i][j];


        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
        cout<<"b"<<i<<j<<endl;
        cin>>B[i][j];


        }
    }
     for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
        C[i][j]=A[i][j] +B[i][j];
        }
    }
     for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
        cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;







}
