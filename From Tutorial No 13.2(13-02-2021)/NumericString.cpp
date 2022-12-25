#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    sort(s.begin(),s.end());
    s=string(s.rbegin(),s.rend());


   //Using another function
   // sort(s.begin(),s.end(),greater<char>());

    cout << s << endl;

    return 0;
}
