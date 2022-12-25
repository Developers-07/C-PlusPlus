#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,k;
    cin >> r >> c;
    for(i=1; i<=r; i++)
    {
        if(i==1 || i==r)
        {
            for(k=1; k<=c; k++)
            {
                cout << "*" << " ";
            }
            cout << endl;
        }
        else
        {
            for(k=1; k<=c; k++)
            {
                if(k==1)
                {
                    cout << "*" << " ";
                }
                else if(k==c)
                {
                    cout << "*" << " " << endl;
                }
                else
                {
                    cout << " " << " ";
                }
            }
        }
    }
    return 0;
}
