#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    int b[3][3];
    int sum[3][3];
    cout<<"Enter the elements of A"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout << "Enter element A" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }

    cout<<"Enter the elements of B"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout << "Enter element B" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }


    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

