//prime numbers
#include <iostream>
using namespace std;

int main()
{
    int n, rem, i, status = 0; //if status = 0 then prime, if 1 then non-prime

    cout<<"Enter the number to check: ";
    cin>>n;

    i = 2;
    while(i<n)
    {
        rem = n%i;
        if(rem == 0)
        {
            status = 1; //non prime
            break;
        }
        i = i+1;
    }
    if(status == 0)
    {
        cout<<endl<<"prime";
    }
    else
    {
        cout<<endl<<"non-prime";
    }
}
