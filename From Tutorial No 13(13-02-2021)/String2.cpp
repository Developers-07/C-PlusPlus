#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int a;
    getline(cin,s1);
    getline(cin,s2);

    a=s1.compare(s2);
    cout << a << endl;
    if(a==0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }


}
