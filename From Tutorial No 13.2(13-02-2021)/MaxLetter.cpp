#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hgdjkdsjdhfhf";
    int l,fr[26];
    l=s.size();

    for(i=0;i<26;i++)
    {
        fr[i]=0;
    }
    for(j=0;j<=l-1;j++)
    {
        fr[s[j]-'a']++;
    }
    int maxf=0;
    char ans='a';
    for(j=0;j<26;j++)
    {
        maxf=fr[i];
        ans=i+'a';
    }

    cout <<

}
