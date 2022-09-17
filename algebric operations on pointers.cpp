#include <iostream>
using namespace std;
int main()
{
    int a[80]={10,20,30,40,50};
    int *ptr;
    ptr=&a[2]-1;
    cout<<*ptr;
    return 0;

}
