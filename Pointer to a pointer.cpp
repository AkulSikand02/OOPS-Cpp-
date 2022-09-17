#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    int **ptr1;
    int x=10;
    ptr=&x;
    ptr1=&ptr;
    cout<<*ptr1<<endl;// Prints the address of ptr
    cout<<**ptr1<<endl;// Prints the value in x
    cout<<ptr<<endl;//Prints the address stored in ptr
    cout<<ptr1<<endl;//Prints the address stored in ptr1
    cout<<&ptr<<endl;//Prints the address ptr
    cout<<&ptr1<<endl;//Prints the address of ptr1
    return 0;
}

