# include <bits/stdc++.h>
using namespace std;
struct Rectangle 
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
}

void changelength(struct Rectangle *r2, int n)
{
    r2->length = n;
}
int main()
{
    struct Rectangle r;
    initialize(&r, 10, 2);
    cout<<r.length <<endl;
    area(r);
    changelength(&r,20);
    cout << r.length;
    return 0;
}