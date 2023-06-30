# include <bits/stdc++.h>
using namespace std;
int sum = 0;
int result(int n)
{
    if(n>0)
    {
        sum = sum + n;
        result(n-1);
    }
    return sum;
}

int result1(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return result1(n-1) + n;
    }
}
int main()
{
    int x;
    cin >> x;
    cout << result(x)<<endl;
    cout << result1(x);
    return 0;
}