# include <bits/stdc++.h>
using namespace std;
double e(double x, double n)
{
    static double s = 1;
    if(n==0)
    {
        return s;
    }
    else
    {
        s = 1 + x/n*s; // important that both x and n has to be of double type otherwise x/n will be rounded off to nearest integer which will give different output (not accurate)
        return e(x, n-1);

    }

}
double e1(double x, double n)
{
    double s = 1;
    for( ;n>0;n--)
    {
        s = 1+x/n*s;
    }
    return s;
}
int main()
{
    double x,n;
    cin >> x;
    cin >> n;
    cout << e(x,n)<<endl;
    cout << e1(x,n);
    return 0;
}