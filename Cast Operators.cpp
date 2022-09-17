#include <iostream>
using namespace std;

int main()
{
    float k,*fptr;
    int i,*iptr;
    int *q;
    int a[80]={10,20,30,40,50,60,70,80,90,100};
    k=9.5;
    i=10;
    fptr=&k;
    //fptr=float*(&i);// or float=(float*)&i;
    cout<<*fptr;

    return 0;
}
