#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,r,d=0,w=1;
    cin >> num;
    while(num>0)
    {
       r=num%10;
       d=d+r*w;
       num=num/10;
       w=w*2;
    }
    cout << d << endl;
    return 0;
}
