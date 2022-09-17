#include <iostream>
using namespace std;

class abc
{
    int *a;
    int size;
public:
    abc(){}

    abc(int k)
    {
        size = k;
        a = new int(k);
    }
    void input()
    {
        for(int i = 0;i<size; i++)
        {
            cin>>a[i];
        }
    }
    void output()
    {
        for(int i = 0;i<size; i++)
        {
            cout<<a[i]<<" ";
        }
    }
};



int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    abc ob1(n);
    cout<<"Input Data \n";
    ob1.input();
    ob1.output();

    cout<<endl<<"Size of Object: "<<sizeof(ob1);
    return 0;
}
