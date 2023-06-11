# include <bits/stdc++.h>
using namespace std;
struct Rectangle 
{
    int length;
    int breadth;
};

int area(struct Rectangle r1)
{
    r1.length = 20; 
    return r1.length*r1.breadth; // here length is changed to 20
}

int area1(struct Rectangle *r2)
{
    r2->length = 20; 
    return r2->length*r2->breadth;
}
// return pointer to a stucture 

struct Rectangle *func()
{
    struct Rectangle *p;
    p = new Rectangle;
    //  p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // in c language
    p->length = 12;
    p->breadth = 2;

    return p;
}
 

int main()
{
    Rectangle r = {10, 5};
    cout << "area is " << area(r) <<endl; // here length is not changed because a copy was passed to the function
    cout << r.length<<endl; // but the length is not changed here as parameter was passed by value
    cout <<"area1 is " << area1(&r) <<endl; // here length is changed because address was passed
    cout << r.length << endl; // here length will be changed because parameter was passed by address.

    struct Rectangle *ptr;
    ptr = func();
    cout << ptr->length << " " << ptr->breadth <<endl;

    return 0;
}