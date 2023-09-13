#include <iostream>
#include "UnsortedType.h"

using namespace std;
int main()
{

    UnsortedType <int> ut();

    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);

    // for (int i = 0; i < 4; i++)
    // {
    //     cin >> i;
    //     ut.InsertItem(i);
    // }

    int number;

    for (int i = 0; i < ut.LengthIs(); i++)
    {
        ut.GetNextItem(number);
        cout << number << " ";
    }

    return 0;
}