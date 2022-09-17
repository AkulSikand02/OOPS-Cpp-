#include <iostream>
using namespace std;

class room
{
    float breadth, length;

public:
    void get(float p1, float p2);
    void display ();
    float area();
    float perimeter();
};

void room::get(float p1, float p2)
{
    length = p1;
    breadth = p2;
}
float room:: area ()
{
    return (length * breadth);
}
float room:: perimeter()
{
    return (2*(length+breadth));
}
void room:: display()
{
    cout<<"Length = "<<length;
    cout<<"\t Breadth = "<<breadth;
    cout<<endl<<"Area of room = "<<area();
    cout<<endl<<"Perimeter of room = "<<perimeter();
}

int main()
{
    room ob[5];
    int i = 0;
    while(i<5)
    {
        float l, b;
        cout<<"Enter the length of the "<<i+1<<" room: ";
        cin>>l;

        cout<<endl<<"Enter the breadth of the "<<i+1<<" room: ";
        cin>>b;

        ob[i]. get(l,b);
        ob[i]. display();

        i ++;
    }

    return 0;
}
