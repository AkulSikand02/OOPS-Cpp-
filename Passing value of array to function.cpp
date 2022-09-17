#include <iostream>
using namespace std;

void show(int k[])
{
    for(int i=0;i<30;i++)
    {
        cout<<k[i];
    }
}

int main()
{
    void show(int b[]);
    int a[20]={1,2,3,4,5};

    show(a);
    return 0;
}
