#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,l;
    cin >> s;
    l=s.size();
    for(i=0;i<=l-1;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }

    // Using Function
    // transform(s.begin(),s.end(),s.begin(),::tolower);

    cout << s << endl;
    return 0;
}
