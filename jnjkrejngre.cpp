
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x;
	    cin>>a>>b>>x;



wwhile(a!=b)
        	    {
        	        if(a>b)
                    {
                        a=a-x;
                        b=b+x;

        	        }
        	        else
        	        {
                         a=a+x;
                        b=b-x;
        	        }
        	       // cout<<"YES"<<endl;

        	    }
            if(a==b)
	    {
	        cout<<"YES"<<endl;

	    }
	    else
	    printf("NO");







	}
	return 0;
}
