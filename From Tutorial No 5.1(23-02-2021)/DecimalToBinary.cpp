#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum=0,r,a=0,v;
    cin >> num;
    while(num>0)
    {
        r=num%2;
        sum=sum*10+r;
        num=num/2;
    }
    cout << sum << endl;
    while(sum>0)
    {
        v=sum%10;
        a=a*10+v;
        sum=sum/10;
    }
    cout << a << endl;
    return 0;
}
