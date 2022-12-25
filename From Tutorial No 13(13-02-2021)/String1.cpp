#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s("GeeksForGeeks");
    cout << s << endl;
    cout << "Character of given index : " << s.at(4) << endl;

    string s1,s2,a;
    int num;
    getline(cin,s1);
    getline(cin,s2);
    cout << s1 << endl << s2 << endl;

    a=s1+" "+s2;
    cout << a << endl;

    cout << s1[1] << endl;

    num=s1.size();
    cout << num << endl;


    return 0;
}
