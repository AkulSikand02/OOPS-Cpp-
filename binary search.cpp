#include<iostream>
using namespace std;
int main()
{
    int i, arr[10], Item, li, ui, mid;
    cout<<"Enter 10 Elements : ";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter Element to be Search: ";
    cin>>Item;
    li = 0;
    ui = 9;
    mid = (li+ui)/2;
    while(li <= ui)
    {
        if(arr[mid]<Item)
            {
                li = mid+1;
            }
        else if(arr[mid]==Item)
        {
            cout<<"\nThe number, "<<Item<<" found at Position "<<mid+1;
            break;
        }
        else
            ui = mid-1;
        mid = (li+ui)/2;
    }
    if(li>ui)
        cout<<"\nThe number, "<<Item<<" is not found in given Array";
    cout<<endl;
    return 0;
}
