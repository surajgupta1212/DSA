# include <bits/stdc++.h>
using namespace std;
double e(int x, int n)
{
    static double p = 1, f = 1; //static is used so that it does not initialize every time the function calls itself.
    double r;
    if(n==0)
    {
        return 1;
    }
    else
    {
        r = e(x,n-1); // first call then intialize static variables
        p = p*x;
        f = f*n;
        return r + p/f; // while returning the operations on function are performed
    }
}
int main()
{
    double x,n;
    cin >> x;
    cin >> n;
    cout << e(x,n);
    return 0;
}