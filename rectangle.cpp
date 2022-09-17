#include <iostream>
using namespace std;
class Room
{
	float breadth, length;
	public:
		void get(float p1, float p2);
		void display();
		float area();
		float perimeter();
};
void Room::get(float p1, float p2)
{
	length=p1;
	breadth=p2;
}
float Room::area()
{
	return (length*breadth);
}
float Room::perimeter()
{
	return (2*(length+breadth));
}
void Room::display()
{
	cout<<"Length = "<<length<<" Breadth = "<<breadth<<endl;
	cout<<"Area of Room = "<<area()<<endl;
	cout<<"Perimeter of Room = "<<perimeter()<<endl;
}
int main()
{
	Room ob1[5];
	float l,b;
	for(int i=0;i<5;i++)
	{
		cout<<"Input length and breadth for Room "<<i+1<<":";
		cin>>l>>b;
		ob1[i].get(l,b);
		ob1[i].display();
	}
	return 0;

}

