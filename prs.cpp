#include<iostream>
#include<iomanip>
using namespace std;
/*int g (int x, int n) {
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      x *= i + 1;
      continue;
    }
    x--;
    if (x == 0) {
      break;
    }
  }
  return x;
}*/
int main()
    {
       /* int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        int key;
        cin>>key;

        for(int i=n;i>0;i--)
        {
            if(key==arr[i])
            {
                cout<<"element Found at"<<i+1;



            }

        }
        cout<<"Element not found
        int i,n;
        cin>>n;
        for(i=1;i<n;i++)
        {
            cout<<(-36+i*i)<<endl;
        }*/
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];


    }
    int start=0;
    int en=n-1;
    int mid;
    int key;
    cin>>key;

    for(int i=0;i<n;i++)
    {
        mid=(start+en)/2;

        if(a[mid]==key)
        {
            cout<<"Element found at "<<mid;
            exit(0);

        }
        else if(a[mid]<key)
        {
            start=mid+1;

        }
        else
        {
            en=mid-1;

        }
    }
    if(start>en)
    {
        cout<<"Element not found"<<endl;
    }
    return 0;




    }
