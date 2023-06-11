# include <bits/stdc++.h>
using namespace std;
class Rectangle
{
    private :
    int length;
    int breadth;
    public : 
    Rectangle() // default constructor
    {
        length = 1;
        breadth = 1;
    }
    Rectangle(int l, int b); // parameterised constructor
    int area(); //
    int perimeter();// facilitator
    int getlength(){ return length;} // accessor
    void setlength(int l) {length = l;}; //mutator
    ~Rectangle(); // destructor

};
 
Rectangle :: Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle :: area()
{
    return length * breadth;
}
int Rectangle :: perimeter()
{
    return 2*(length + breadth);
}
Rectangle :: ~Rectangle()
{
    cout << "Destructor Called"<<endl;
}
int main()
{

    Rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setlength(20);
    cout<<r.getlength()<<endl;
    return 0;
}