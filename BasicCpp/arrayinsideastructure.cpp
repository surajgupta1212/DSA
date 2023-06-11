# include <bits/stdc++.h>
using namespace std;
struct test
{
    int A[5];
    int n;
};

void fun(struct test t)
{
    t.A[2] = 50; // t1 ka copy pass hua hai
    cout << t.A[2] <<endl;
}
int main()
{
    struct test t1 = {{2, 5, 1, 10, 54}, 5};
    fun(t1); //hence array ko bhi call by value kar sakte hai struct ka help se
    cout << t1.A[2]; // change nahi hoga kyuki call by value ha
    return 0;
}