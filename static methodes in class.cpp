#include <iostream>
using namespace std;

class abc
{
public:
    static int a;
    int b;
    static void show()
    {
        cout<<a<<endl;
    }
};
int abc::a=50;
int main()
{
    abc::show();
    abc ob1;
    ob1.show();

    return 0;
}
