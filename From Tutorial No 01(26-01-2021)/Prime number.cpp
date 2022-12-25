#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,j,c=0;
    cin >> num;
    for(i=1;i<=num;i++)
    {
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
           {
               c=c+1;
           }
       }
       if(c==2)
       {
           cout << i << endl;
       }
       c=0;
    }
    return 0;
}
