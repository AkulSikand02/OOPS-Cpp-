#include<iostream>
using namespace std;

class ARRAY
{
    public:
    int largest(int arr[])
    {
	int i;

	int l1 = arr[0];
	for (i = 1; i < 5; i++)
		if (arr[i] > l1)
        {
            l1 = arr[i];
        }

        return l1;
    }

    int insertion()
    {
    int x;
    cout<<"\nEnter Element to Insert: ";
    cin>>x;
    arr[i]=x;
    }

};
int main()
{
    ARRAY ob1;
    int arr[6];
    cout<<"Enter 5 Elements : ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    int y;
    y=ob1.largest(arr);
    cout << "Largest is "<<y;
        cout<<"\nThe New Array is:\n";
    for(i=0; i<6; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}
