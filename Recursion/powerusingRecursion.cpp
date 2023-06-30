# include <bits/stdc++.h>
using namespace std;
int pow(int m, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return pow(m,n-1)*m;
    }
}

int effecpow(int m , int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(n%2 == 0)
    {
        return pow(m*m, n/2 -1);
    }
    else
    {
        return m*pow(m*m, (n-1)/2 -1);

    }
}
int main()
{
    int x,y;
    cin >>x;
    cin >>y;
    cout << pow(x,y);
    // int pow = 1;
    // for(int i = 0; i<n; i++)
    // {
    //     pow = pow*m;
    // }
    // cout << pow;
    return 0;
}