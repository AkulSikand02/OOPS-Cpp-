#include <iostream>
using namespace std;
class def;
class abc
{
    int i;
public:
    void get()
    {
        cout<<"Enter I: ";
        cin>>i;
        cout<<endl;
    }
    void display(def);
};
class def
{
    int j;
public:
    void get()
    {
        cout<<"Enter J: ";
        cin>>j;
        cout<<endl;
    }
    friend void abc :: display(def);

};
void abc :: display(def obj)
{
    cout<< i <<" "<<obj.j;
    cout<<"\n"<<i+obj.j;

}

int main()
{
    abc ob1;
    def ob2;
    ob1.get();
    ob2.get();
    ob1.display(ob2);

    return 0;
}
