# include <bits/stdc++.h>
using namespace std;
void TOH(int n , int A, int B, int C)
{
    if(n>0)
    {
        TOH(n-1, A, C, B); // disk moved from A to B using C
        cout << "from " << A <<" to " << C << " "<<endl; //disk moved from A to C using B
        TOH(n-1, B, A, C); // disk moved from B to C using A

    }
}
int main()
{
    int x;
    int A = 1;
    int B = 2;
    int C = 3;
    cin >> x;

    TOH(x, A, B, C);
    return 0;
}