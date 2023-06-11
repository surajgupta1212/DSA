# include <bits/stdc++.h>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;

    void initialize (int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length*breadth;
    }

    void changelegth(int n)
    {
        length = n;
    }

    int perimeter()
    {
        return 2*(length + breadth);
    }
};

// we can also call the functions outside the class 

int main()
{
    Rectangle r;
    r.initialize(10, 5);
    cout << r.area() << endl;
    r.changelegth(15);
    cout << r.perimeter() <<endl;
    return 0;
}