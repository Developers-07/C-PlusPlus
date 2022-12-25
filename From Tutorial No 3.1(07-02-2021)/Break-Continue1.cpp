#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,c=0;
    cin >> a >> b;
    for(i=a;i<=b;i++)
    {
        if(i==1)
        {
            continue;
        }

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
                break;
            }
        }
        if(c==0)
        {
           cout << i << endl;
        }
        c=0;
    }
    return 0;
}
