//malloc and new allocates memory at run time
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int *p;

    //int a[50],
    int size;
    cout<<"How many elements you want to enter into an array: ";
    cin>>size;

    //p = (int *) malloc(4*size); //using malloc function which is part of stdio.h
    p = new int [size];

    for(int i = 0; i<size; i++)
    {
        cin>>p[i];
    }
    cout<<"output\n";
    for(int i = 0; i<size; i++)
    {
        cout<<p[i];
    }
    cout<<endl<<sizeof(p);

    return 0;

}
