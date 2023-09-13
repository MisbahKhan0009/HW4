#include <iostream>
#include "unsortedtype.cpp"
using namespace std;
int main()
{
    UnsortedType <int> ut;
    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);
    int input;
    for (int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(input);
        cout<<input<<" ";
    }
    cout<<endl<<"The length of the list is: "<<ut.LengthIs();
    ut.InsertItem(1);
    ut.ResetList();
    cout<<endl;
    for (int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(input);
        cout<<input<<" ";
    }
    int a=4;
    bool f;
    ut.RetrieveItem(a, f);
    cout<<endl;
    if (f==true)
    {
        cout<<"The item is found";
    }
    else{
        cout<<"The item is not found";
    }
    cout<<endl;
    if(ut.IsFull()==true)
    {
        cout<<"The list is full";
    }
    else
    {
        cout<<"The list is not full";
    }
    cout<<endl;

    ut.DeleteItem(6);
    ut.ResetList();

    for (int i=0; i<ut.LengthIs(); i++)
    {
        ut.GetNextItem(input);
        cout<<input<<" ";
    }
}