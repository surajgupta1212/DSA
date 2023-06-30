# include <bits/stdc++.h>
using namespace std;
void fun1(int n){

    if(n>0)
    {
    cout << n << " ";
    fun1(n-1);
    } // output should be 3 2 1 {ascending or while calling}
}

void fun2(int n)
{
    if(n > 0)
    {
        fun2(n-1);
        cout << n << " ";
    } // output should be 1 2 3 {descending or while returning}
}
int main()
{
    int x = 3;
    fun1(x);
    cout << endl;
    fun2(x);
    return 0;
}
// Recursion has advantages over loop because Recursion may execute both while calling(fun1) or while returning(fun2)