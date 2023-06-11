# include <bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main()
{
    // consume memory from heap
     Rectangle *p;
     p = new Rectangle; // memory allocated dynamically like malloc

     p ->length = 14;
     p ->breadth = 8;

     cout << p ->length << endl;
     cout << p ->breadth <<endl; // here arrow operator is used because p is a pointer for normal variable . operator is used
    return 0;
}