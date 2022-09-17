#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void input()
    {
        cout<<"Enter Complex number: ";
        cin>>real;
        cin>>img;
    }

    void show()
    {
        cout<<real<< "+i" <<img<<endl;
    }

    complex add(complex k1)
    {
        complex temp;
        temp.real = real+k1.real;
        temp.img = img + k1.img;

        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c1.show();
    c2.show();

    c3 = c1.add(c2);
    c3.show();

    return 0;
}
