#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
