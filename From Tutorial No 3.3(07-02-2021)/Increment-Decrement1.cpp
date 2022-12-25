#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=10,j=20,k;

    k=(i--)-(i++)+(--j)-(++j)+(--i)-(j--)+(++i)-(j++);

    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << "k = " << k << endl;

    return 0;
}
