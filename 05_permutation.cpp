#include<iostream>
using namespace std;
int numFactorial(int a)
{
    int fact = 1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int a=numFactorial(n);
    int c=numFactorial(n-r);
    int d = (a / c);
    cout<<d<<" "<<endl;
}