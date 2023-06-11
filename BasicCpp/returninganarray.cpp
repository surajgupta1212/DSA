# include <bits/stdc++.h>
using namespace std; 
int * fun(int n)   // funtion with return type of an array
{
    int *p;
    p = (int *)malloc(n*sizeof(int));
    for(int i = 0; i<n ; i++){
     p[i] = i + 1;
    }
    return p;
}
int main()
{
    int *A;
    int sizeofarray = 7;
    A = fun(sizeofarray);
    
    for(int i = 0; i<sizeofarray ; i++){
     cout << A[i];
    }
    return 0;
}