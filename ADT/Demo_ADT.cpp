# include <bits/stdc++.h>
using namespace std;
struct Array
{
    int *A; //space //memory
    int size=0; //size
    int length=0; //length
};

void Display(struct Array arr)
{
    cout << "The Array is" <<endl;
    for(int i = 0; i<arr.length; i++)
    {
        cout << arr.A[i] << endl; 
    }
}
int main()
{
    int n;
    struct Array arr;
    cout << "Enter array size" <<endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 5;

    cout << "Enter Number of Elements" << endl;
    cin >> n;
    cout << "Enter Elements of Array" << endl;
    for(int i=0 ; i < n; i++)
    {
        cin >> arr.A[i];
    }
    Display(arr);
    return 0;
}