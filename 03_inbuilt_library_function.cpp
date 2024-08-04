#include<iostream>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string str,str1;
    str="hello world";
    str1="HELLO WORLD";
    int a,b;
    a=2;
    b=4;
    cout<<sqrt(16)<<endl; // giving the square root of the number.
    cout<<cbrt(1000)<<endl;  // giving the cube root of the number.
    cout<<min(4,8)<<endl;  // giving the minimum value of the number.
    cout<<max(4,8)<<endl;  // giving the maximum value of the number.
    cout<<pow(2,10)<<endl; // giving the power of the number.
    cout<<ceil(2.3)<<" "<<ceil(2.8)<<" "<<ceil(-2.3)<<" "<<ceil(-2.8)<<endl; // nearest upto larger or upper part
    cout<<floor(2.3)<<" "<<floor(2.8)<<" "<<floor(-2.3)<<" "<<floor(-2.8)<<endl; // nearest upto lower or ground part.
    cout<<rand()<<endl; // generates random value.
    putchar(toupper('a')); // generates the uppercase character only not the string.
    cout<<endl;
    putchar(tolower('Z')); // generates the lowercase character only not the string and it is not use the cout, it only work with the putchar function.
    cout<<endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper); // using this algorithm by including algorithm library and transform library we can convert the string into uppercase or lowercase.
    cout<<str<<endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower); 
    cout<<str1<<endl;
    cout<<isupper('A')<<endl; // prints 0 if it false and print 1 if it is true.
    cout<<isalnum('s')<<endl; // print true if it is alphabet or numeric and print 0 if it is false.
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}