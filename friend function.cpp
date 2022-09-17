#include <iostream>
using namespace std;

class Complex2;
class Complex
{
private:
        int real;
        int img;

public:

    void input()
    {
        cout<<"Enter real: ";
        cin>>real;
        cout<<"Enter img: ";
        cin>>img;
    }
    void friend show(Complex,Complex2);
};

class Complex2
{
    int i;
    int r;
public:
    void input()
    {
        cout<<"Enter r: ";
        cin>>r;
        cout<<"Enter i: ";
        cin>>i;
    }
    void friend show(Complex,Complex2);
};

void show (Complex ob1, Complex2 ob5)
{
    cout<<(ob1.real+ob5.r)<<"+i"<<(ob1.img+ob5.i);
}
int main()
{
    Complex ob3;
    Complex2 ob6;
    ob3.input();
    ob6.input();
    show(ob3,ob6);

    return 0;
}
