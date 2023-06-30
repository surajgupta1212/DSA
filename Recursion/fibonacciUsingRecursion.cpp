# include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else{
        
        return fibo(n-1) + fibo(n-2);
    }
}
void fibo1(int n)
{
    int t1 = 0;
    int t2 =1;
    int next = t1 + t2;
    cout << t1 <<endl <<  t2 <<endl << next <<endl;
    for(int i = 0; i<n; i++)
    {
        t1 = t2;
        t2 = next;
        next = t1 + t2;
        cout << next <<endl;
    }
}
int main()
{
    int x;
    cin >> x;
    fibo(x);
    fibo1(x);
    return 0;
}