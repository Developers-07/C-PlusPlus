#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i;
    bool flag=0;
    cin >> num;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout << "Non Prime Number" << endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout << "Prime Number" << endl;
    }
    return 0;
}
