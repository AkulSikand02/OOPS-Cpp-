#include <iostream>
using namespace std;

class number
{
    int num;
public:
    int status; //0 means prime, 1 means not prime

    void input(int p1); //prototype
    void checkPrime()
    {
        int rem, i = 2;
        while(i<num)
        {
            rem = num%i;
            if(rem == 0)
            {
                status = 1;
                break;
            }
            i++;
        } //end of while
    } //end of checkPrime
}; //end of class number

//defining void input
void number:: input (int p1) //association of void input to class number
{
    num = p1;
    status = 0;
}

int main()
{
    number ob1;
    int n;
    cout<<"Enter the no. which you want to check for Prime: ";
    cin>>n;

    ob1.input(n);
    ob1.checkPrime();

    if(ob1.status == 0)
    {
        cout<<endl<<"Given number is Prime"<<endl;
    }
    else
    {
        cout<<endl<<"Given number is not Prime"<<endl;
    }
    return 0;
}
