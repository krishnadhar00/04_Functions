#include<iostream>
using namespace std;
int fact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r)
{
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    int d=(a/(b*c));
    return d;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}