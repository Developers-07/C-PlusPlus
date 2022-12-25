#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout << " " << " ";
        }
        for(j=i;j>=1;j--)
        {
            cout << j << " ";
            if(j==1)
            {
                for(k=2;k<=i;k++)
                {
                    cout << k << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
