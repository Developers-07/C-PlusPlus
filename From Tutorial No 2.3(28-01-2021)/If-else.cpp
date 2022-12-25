#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a>=b && a>=c)
    {
        cout << "Large number is : " << a << endl;
    }
    else if(b>=a && b>=c)
    {
        cout << "Large number is : " << b << endl;
    }
    else if(c>=a && c>=b)
    {
        cout << "Large number is : " << c << endl;
    }
    return 0;
}
