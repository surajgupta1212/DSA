# include <bits/stdc++.h>
using namespace std;
int comb(int n, int r) // using pascal's triangle or formula n-1Cr-1 + n-1Cr = nCr
{
    if(r==0 || r==n)
    {
        return 1;
    }
    else
    {
        return comb(n-1,r-1) + comb(n-1, r);

    }
}

int factn(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return factn(n-1)*n;
    }
}
int factr(int r)
{
    if(r == 0)
    {
        return 1;
    }
    else
    {
        return factr(r-1)*r;
    }
}
int fact_nminusr(int t)
{
    if(t==0)
    {
        return 1;
    }
    else
    {
        return fact_nminusr(t-1)*t;
    }
}
int comb1(int n, int r) //using general formula nCr = n!/(r!*(n-r)!)
{
    int t1,t2,t3 = 0;
    t1 = factn(n);
    t2 = factr(r);
    t3 = fact_nminusr(n-r);

    return t1/(t2*t3);
}
int main()
{

    int x,y;
    cin >> x;
    cin >> y;
    cout << comb(x,y) << endl;
    cout << comb1(x,y);
    return 0;
}