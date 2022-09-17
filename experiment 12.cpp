#include <iostream>
#include <iomanip>
using namespace std;
void line()
    {
        for(int i=0;i<80;i++)
        {
            cout<<"-";
        }
    }
class Employee
{
string name,phone;
int salary;
public:
    string designation,residence;
    static int Count;
    void get()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"designation: ";
        cin>>designation;
        cout<<"Enter Phone Number: ";
        cin>>phone;
        cout<<"Enter Salary: ";
        cin>>salary;
        cout<<"Enter Residence: ";
        cin>>residence;
    }
    static void header()
    {
        cout.setf(ios::left,ios::adjustfield);
        cout<<setw(9)<<"SNo"<<setw(14)<<"Name"<<setw(15)<<"Designation"<<setw(14)<<"Residence"<<setw(12)<<"Salary"<<setw(16)<<"Phone";
        cout<<endl;
        line();
    }
    void display()
    {
        cout<<endl;
        cout.setf(ios::left,ios::adjustfield);
        cout<<setw(9)<<(Count++)<<setw(14)<<name<<setw(15)<<designation<<setw(14)<<residence<<setw(12)<<salary<<setw(16)<<phone;
        cout<<endl;
    }

};

int Employee::Count = 1;

int main()
{
    Employee ob[50];
    int Size;
    cout<<"Enter the total no. of employees: ";
    cin>>Size;
    for(int i;i<Size;i++)
    {
        ob[i].get();
        cout<<endl;
    }

    Employee::header();

    for(int i=0;i<Size;i++)
    {
        ob[i].display();
    }
    cout<<endl<<"Manager"<<endl;
    for(int i=0; i<Size ;i++)
    {
        if( ob[i].designation.compare("Manager") == 0)
            ob[i].display();
    }
    cout<<endl<<"Chandigrah"<<endl;
    for(int i=0; i<Size ;i++)
    {
        if( ob[i].residence.compare("Chandigrah") == 0)
            ob[i].display();
    }
    return 0;
}
