#include <iostream>
using namespace std;

class calculator
{
    float first,second,total1;
public:
    void intput()
    {
        cout<<"Enter First number: ";
        cin>>first;
        cout<<"Enter Second number: ";
        cin>>second;
    }
    void add()
    {
        total1 = first + second ;
        cout<<"The sum of numbers is: "<<total1<<endl;
    }
    void Sub()
    {
        total1 = first - second ;
        cout<<"The Subtraction of numbers is: "<<total1<<endl;
    }
    void Mul()
    {
        total1 = first * second ;
        cout<<"The Multiply of numbers is: "<<total1<<endl;
    }
    void Div()
    {
        total1 = first / second ;
        cout<<"The Division of numbers is: "<<total1<<endl;
    }

    void copyright()

    {
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Made bY Akul"<<endl;
        cout<<2110992509;
        cout<<endl;
    }

};

int main()
{
    calculator ob1;
    ob1.intput();
    int temp = 1;
    while(temp)
    {
        cout<<"Enter the choice "<<endl;
        cout<<"To Add press (1)"<<endl;
        cout<<"To Subtract press (2)"<<endl;
        cout<<"To Multiply press (3)"<<endl;
        cout<<"To Divide press (4)"<<endl;
        cout<<"To Exit press (5)"<<endl;
        int n;
        cin>>n;
        switch (n)
        {
            case 1:
            ob1.add();
            break;
            case 2:
            ob1.Sub();
            break;
            case 3:
            ob1.Mul();
            break;
            case 4:
            ob1.Div();
            break;
            case 5:
            temp = 0;
            break;
            default:
            cout<<"Enter a valid option";
        }
    }
    ob1.copyright();
    return 0;
}
