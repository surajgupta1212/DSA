# include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 1;
    p[4] = 9;
    int *q;
    q = new int[10];
    for(int i = 0; i<5; i++)
    {
        q[i] = p[i];
    }
    p = q;
    delete []p;
    q = NULL;
    for(int i = 0; i<10; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}