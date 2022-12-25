#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int num,i,sum=0;
    float avg;
    cin >> num;
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    avg = sum/(float)num;
    cout << fixed;
    cout << sum << endl << setprecision(3) << avg << endl;
    return 0;
}
