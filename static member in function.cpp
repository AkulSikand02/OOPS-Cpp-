#include <iostream>
using namespace std;
void show()
{
    static int p1=50;
    cout<<p1<<endl;
    ++p1;
}

int main()
{
    cout<<"Call by Value"<<endl;
    int i=10;
    for(int j=0;j<5;j++)
    {
        show();
    }

    return 0;
}

