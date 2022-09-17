#include <iostream>
using namespace std;

class ARRAY
{
    int a[80];
    int Size;
    int status;//0=not found 1=fount
        public:
            void input(int p1);
            int Leaner_Search(int p1);
};//End of class
void ARRAY::input(int p1)
{
    Size=p1;
    for(int i=0;i<Size;i++)
        {
            cin>>a[i];
            status=0;
        }
}//End of input
int ARRAY::Leaner_Search(int p1)
{
    for(int i=0;i <Size;i++)
    {
        if(a[i]==p1)
        {
            return 1;
            break;
        }//End of If
    }//End of for
    return 0;
}//End of leaner search


int main()
{
    int n,item,Flag;
    cout<<"Enetr the Nnmber: "<<endl;
    cin>>n;
    ARRAY ob1;
    ob1.input(n);
    cout<<"Enter the element you want to search: "<<endl;
    cin>>item;
    Flag=ob1.Leaner_Search(item);
    if(Flag)
    {
        cout<<"Found"<<item;
    }
    else
    {
        cout<<"Not Fount";
    }
    return 0;
}
