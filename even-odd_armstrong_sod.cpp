//even_odd, sum of digits and armstrong number under one class
#include <iostream>
#include <process.h> //for exit function.
#include <stdlib.h>
using namespace std;

class number
{
    int num;
    public:
    int ste; //status for even: 0 = even, 1 = odd;
    int sta; //status for armstrong: 0 = non-armstrong, 1 = armstrong;
    int sum;
    void input(int p1)
    {
            num = p1;
            ste=sta=sum= 0;
    };
    void checkEven()
    {
        int rem = num % 2;
        if(rem != 0)
        {
            ste = 1;
        }
    };
    void compute_sod()
    {
        int temp = num;
        int result= 0;
        int digit;
        while(temp>0)
        {
            digit = temp % 10;
            result = result + digit;
            temp = temp/10;
        }
        sum = result;
    };
    void checkArmstrong()
    {
        int temp = num;
        int result= 0;
        int digit;
        while(temp>0)
        {
            digit = temp % 10;
            result = result + digit*digit*digit;
            temp = temp/10;
        }
        if(num == result)
        {
            sta = 1;
        }
    };
};

int main()
{
    int choice;
    while(1)
    {


        cout<<endl<<"MENU"<<endl;
        cout<<"1. Check for odd/even"<<endl;
        cout<<"2. Check for Armstrong Number"<<endl;
        cout<<"3. Sum of digits"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<endl<<"Enter your choice: ";
        cin>>choice;

        int k;
        number ob1;

        if(choice == 1)
        {
            cout<<"Enter the Number: ";
            cin>>k;

            ob1.input(k);
            ob1.checkEven();

            if(ob1.ste==0)

            {
                cout<<"\neven\n";
            }
            else
            {
                cout<<"\nodd\n";
            }
        }
        else if (choice == 2)
        {
            cout<<"Enter the Number: ";
            cin>>k;

            ob1.input(k);
            ob1.checkArmstrong();
            if(ob1.sta == 0)
            {
                cout<<"\nNon Armstrong\n";
            }
            else
            {
                cout<<"\nArmstrong\n";
            }

        }
        else if(choice == 3)
        {
            cout<<"Enter the Number: ";
            cin>>k;

            ob1.input(k);
            ob1.compute_sod();
            {
                cout<<"sum of digits of number is: "<<ob1.sum<<endl;
            }
        }
        else if(choice == 4)
        {
            exit (0);
        }
        else
        {
            cout<<"Choose a valid option"<<endl;
        }
        char space = 32;
        cout<<"Press any key to clear screen....";
        cin>>space;
        system ("cls");
    } // end while


    return 0;
}




