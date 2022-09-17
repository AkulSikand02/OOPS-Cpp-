#include <iostream> //header file
using namespace std; //library

class numbers
{
    int x,y;
public:
    int sum()
    {
        int result = x+y;
        cout<<"result is: "<<result;
    }

    void input(int p1,int p2)
    {
        x = p1; //num1
        y =  p2; //num2
    }
};

int main()
{
    numbers n1; //n1 is the object of class numbers

    int num1, num2, num3;
    cout<<"Enter 1st number: ";
    cin>>num1;

    cout<<"\nEnter the 2nd number: ";
    cin>>num2;

    n1.input(num1, num2);
    n1.sum();

    return 0;
}
