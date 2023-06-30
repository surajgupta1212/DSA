# include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n > 0)
    {
        return fun(n-1) + n; //descending or while returning
    } //n will change correspoding to the function calls
    return 0;
}     // output will be 1 3 6 10 15

int fun1(int n)
{
    static int x = 0;
    if(n>0)
    {
        x++;
        return fun1(n-1) + x;
    }  // x will not change after execution of the function as x is statically defined
    return 0;
    // output will be 5 10 15 20 25

}
int main()
{
    int a = 5;
    cout << fun(a) <<endl;
    cout << fun1(a) <<endl;
    return 0;
}