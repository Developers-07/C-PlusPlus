#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s="abc";
    cout << s << endl;
    s.clear();
    cout << s << endl;
    if(s.empty())
    {
        cout << "String is empty" << endl;
    }
    else if(!s.empty())
    {
        cout << "String is not empty" << endl;
    }

   //part 2
    string s1="nincompoop";
    s1.erase(2,3);
    cout << s1 << endl;

    //part 3
    string s2="Manager Office";
    cout << s2.find("ger") << endl;

    //part 4
    string s3="Zishan";
    s3.insert(0,"Md ");
    cout << s3 << endl;

    //part 5
    string s4="Engineer",a;
    a=s4.substr(4,4);
    cout << a << endl;

    //part 6
    string s5="programming language";

    s5.replace(3,3,"LOl");
    cout << s5 << endl;

    return 0;


}
