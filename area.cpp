    #include <iostream>
using namespace std;

class area
{
    float length,breath,height,base,radius,area1,area2,area3;
public:
    void rectangle();
    void triangle();
    void circle();
};
void area::rectangle()
{
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breath: ";
    cin>>breath;
    area1 = length * breath;
    cout<<"Area of Rectangle: "<<area1;
}
void area::triangle()
{
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter height: ";
    cin>>height;
    area2 = 1/2 * base * height;
    cout<<"Area of Triangle: "<<area2;
}
void area::circle()
{
    cout<<"Enter radius: ";
    cin>>radius;
    area3 = 3.14 * (radius * radius);
    cout<<"Area of Radius: "<<area3;
}

int main()
{
    area ob1;
    cout<<"Select the area you want to find"<<endl;
    cout<<"Press 1 for rectangle"<<endl;
    cout<<"Press 2 for triangle"<<endl;
    cout<<"Press 3 for circle"<<endl;
    cout<<"Press 4 to exit"<<endl;
    cout<<"Enter choice";
    while(1)
    {
        int n;
        cin>>n;
        switch (n)
        {
        case 1:
            ob1.rectangle();
            break;

        case 2:
            ob1.triangle();
            break;

        case 3:
            ob1.circle();
            break;

        case 4:
            break;
        default:
            cout<<"Enter a valid choice";
        }
    }
    return 0;
}
