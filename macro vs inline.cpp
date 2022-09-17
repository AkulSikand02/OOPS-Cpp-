#include <iostream>
inline int SQUARE(int x) {return x*x;}
using namespace std;

int main()
{
    int a , b;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    cout<<SQUARE(a+b);

    return 0;
}
