# include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[5] = {1, 4, 6, 7, 9}; //created array in stack // Static Array
    int *p;
    p = new int[5]; // created array in heap //new is an operator for allocation of memory in heap // Dynamic array
    p[0] = 2;
    p[1] = 3;
    p[2] = 5;
    p[3] = 8;
    p[4] = 10;

    for(int i = 0; i<5; i++)
    {
        cout << A[i] << " ";
    }
    
    cout<<endl;

    for(int i = 0; i<5; i++)
    {
        cout << p[i] << " ";
    }
    
    return 0;
}