# include <bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main()
{
    // memory is consumed from stAck
    struct Rectangle r = {10,5};
    struct Rectangle *p = &r;

    cout << r.length <<endl;
    cout <<(*p).length <<endl; // can use either this to access value of pointer or
    cout << p -> length; // this syntax
    return 0;
}