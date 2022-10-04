#include <iostream>
using namespace std;
int main()
{
    int n, t, g, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        if (t == a[i])
        {
            g = t;
            c++;
        }
    }
    if (c > 1)
        cout << "number found" << g;
    else
        cout << "number not found";
}
