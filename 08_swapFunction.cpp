#include<iostream>
using namespace std;
// void swap(int x, int y)  // pass by value it will not swap the values.
// {
//     int temp=x;
//     x=y;
//     y=temp;
// }
void swap(int& x, int& y)  // pass by reference it will swap the values.it is not possible in c but possible in cpp.
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y;
}