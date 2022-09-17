#include <iostream>
#include <string.h>
#include <algorithm>
#include <process.h>
using namespace std;
class palindrome
{
    int num;
    string str;

public:
    int flag;
    void input()
    {
        cin>>str;
        flag = 1; // 0 = not palindrome
    }

    void checkPalin()
    {
        string tstr; //tstr is temporary string
        tstr = str;
        reverse (tstr.begin(), tstr.end()); //algorithm.h
        if(str.compare (tstr))
        {
            flag = 0;
        }
    }
};

class fib
{
    int count;
    int t1;
    int t2;

public:
    void input ()
    {
        t1 = t2 = 1;
        cin>>count;
    }
    void generate()
    {
        int i = 3;
        int t3;
        cout<<endl<<t1<<" "<<t2;
        while(i<=count)
        {
            t3 = t2 + t1;
            cout<<" "<<t3;

            t1 = t2;
            t2 = t3;
            i = i + 1;
        } //end of while
    } //end of generate method
};// end of fib class
int main()

{
    while(1)
    {
        cout<<"\nChoose the option: ";
        cout<<endl<<"1. Check Palindrome";
        cout<<endl<<"2. Get Fib series";
        cout<<endl<<"3. Exit";
        int choice;
        cout<<endl<<"Enter your choice: ";
        cin>>choice;

        fib ob2;
        palindrome ob1;

        switch(choice)
        {
            case 1:
                {
                    ob1.input();
                    ob1.checkPalin();

                    if(ob1.flag == 1)
                    {
                        cout<<"Palindrome";
                    }
                    else
                    {
                        cout<<"\nNot Palindrome";
                    }
                    break;
                }
            case 2:
                {
                    cout<<"\n Enter the terms you want to print: ";


                    ob2.input();
                    ob2.generate();
                    break;
                }
            case 3:
                {
                    exit(0);
                    break;
                }

            default:
                {
                    cout<<"Re-Enter the valid choice\n";
                }


        }


    }//end of while

}
