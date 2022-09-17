#include <iostream>
#include <windows.h>
using namespace std;

class Function_Call
{
    int a;
    int b;
	public:
	float add(float x, float y)
	{
        float z = x + y;
        return z;
	}
	float multiply(float *x , float *y)
	{

        //*x = *y + 10;
        //*x = *y - 5;
        a = *x;
	    b = *y;
        float z = a * b;
        return z;
	}
	float devide(float &x,float &y)
    {
        float z = x / y;
//        x = x + 10;
//        x = y - 5;
        return z;
	}
	void get()
	{
        system("Color 1");
        cout<<"Enter the value of first int: ";
        cin>>a;
        system("Color 4");
        cout<<"Enter the value of second int: ";
        cin>>b;
	}
	float a1()
	{
	    return a;
	}
	float b1()
	{
	    return b;
	}

};

int main()
{
	Function_Call ob1;
	ob1.get();
	float divide,multiply,add;
	float a = ob1.a1();
	float b = ob1.b1();
    system("Color 6");
    add = ob1.add(a,b);
    cout<<"Sum By Call BY value: "<<add;
    cout<<endl;
    divide = ob1.devide(a,b);
    cout<<"Divide By call By reference: "<<divide;
    cout<<endl;
    multiply = ob1.multiply(&a,&b);
    cout<<"Multiply By call By Address: "<<multiply;
	return 0;
}
