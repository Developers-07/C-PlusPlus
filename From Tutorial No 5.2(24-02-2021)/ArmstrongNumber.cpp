#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum=0,r,z;
    cin >> num;
    z=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(sum==z)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not An Armstrong Number" << endl;
    }
    return 0;
}
