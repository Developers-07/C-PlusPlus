#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c;
     cin >> a >> b >> c;
     if(a>b && a>c)
     {
         if(b>c)
         {
             cout << "Large number is : " << a << endl << "Middle number is : " << b << endl << "Small number is : " << c << endl;
         }
         else if(c>b)
         {
              cout << "Large number is : " << a << endl << "Middle number is : " << c << endl << "Small number is : " << b << endl;
         }

     }
    else if(b>a && b>c)
     {
         if(a>c)
         {
              cout << "Large number is : " << b << endl << "Middle number is : " << a << endl << "Small number is : " << c << endl;
         }
         else if(c>a)
         {
              cout << "Large number is : " << b << endl << "Middle number is : " << c << endl << "Small number is : " << a << endl;
         }
     }
     if(c>a && c>b)
     {
         if(a>b)
         {
              cout << "Large number is : " << c << endl << "Middle number is : " << a << endl << "Small number is : " << b << endl;
         }
         else if(b>a)
         {
              cout << "Large number is : " << c << endl << "Middle number is : " << b << endl << "Small number is : " << a << endl;
         }
     }

     return 0;
}

