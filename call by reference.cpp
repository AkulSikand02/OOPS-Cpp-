#include<iostream>
//call by reference
using namespace std;
void show(int *p1, int *p2)
{
	int temp= *p1;
	*p1=*p2;
	*p2=temp;
}
int main()
{
    cout<<"Welcome"<<endl;
    int i=10,j=20;
    show(&i,&j);
    cout<<i<<endl<<j;

    return 0;
}
