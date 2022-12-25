#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,k;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout << " " << " ";
        }
        c= i+(i-1);
        for(k=1;k<=c;k++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout << " " << " ";
        }
        c= i+(i-1);
        for(k=1;k<=c;k++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
