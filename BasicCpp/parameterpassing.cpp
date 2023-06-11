# include <bits/stdc++.h>
using namespace std;
void swapbycallbyvalue(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapbycallbyaddress(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

void swapbycallbyreference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10;
    int b = 5;
    swapbycallbyvalue(a,b);
    cout << a <<" " << b <<endl; // a = 10 b = 5

    swapbycallbyaddress(&a,&b);
    cout << a <<" " << b <<endl; // a = 5 b = 10

    swapbycallbyreference(a,b);
    cout << a <<" " << b <<endl; // a = 10 b = 5


    return 0;
}