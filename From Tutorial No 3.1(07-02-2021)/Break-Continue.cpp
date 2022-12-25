#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i;
    cin >> num;
    for(i=1;i<=num;i++)
    {
        if(i%3==0)
        {
           cout << "  ";
          // continue;
           break;
        }
        cout << i << " ";
    }
    return 0;
}
