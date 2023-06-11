# include <bits/stdc++.h>
using namespace std;
// references are the names given to the same variables
int main()
{
    int a = 10;
    int &r = a; ///here r is a reference to a
    cout << r <<endl;
    r++; // r is a so if we change r means a is changed.
    cout << r << "  " << a << endl; 

    int b = 14;
    r = b; // this does not mean that r is a reference to b rather r is assigned the value of b.
    cout << b << " " << r << " " << a << endl;
    return 0;
} 