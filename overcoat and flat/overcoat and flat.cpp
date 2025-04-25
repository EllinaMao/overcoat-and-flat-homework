
#include <iostream>
#include "overcoat.h"
#include "overcoats arr.h"
#include "flat.h"
using namespace std;

int main()
{
// Task 1: Flat
#ifdef TASK1

    Overcoat coat1("Maria", "Parka", 150.0);
    Overcoat coat2("Anna", "Trench", 200.0);
    Overcoat coat3("Anton", "Parka", 120.0);
    Overcoat coat4("Eve", "Leather jacket", 50.0);
    // Demonstrating overloaded operators for Flat

    if (coat1 == coat3)
        cout << "Both coats are of the same type.\n";
    else
        cout << "Both coats are of different types.\n";


    if (coat1 > coat2)
        cout << "Coat 1 is more expensive than Coat 2.\n";
    else
        cout << "Coat 2 is more expensive than Coat 1.\n";


    Overcoats coats;
    coats.AddNewCoat(coat1);
    coats.AddNewCoat(coat2);
    coats.AddNewCoat(coat3);
    coats.AddNewCoat(coat4);


    cout << "Coats array after sort: " << endl;
    // Сортировка массивов по убыванию цены
    coats.SortByPriceDescending();
    coats.PrintInfo();
    

#endif // TASK1

// Task 2: Flat
#ifdef TASK2

    Flat myFlat(2000.32, 6900.23, "123 Agdeeva Chernomorskogo", 12, 30);
    Flat friendFlat(400.32, 1200.23, "456 Nebesnoi Sotni", 1, 7);


    if (myFlat == friendFlat)
        cout << "My flat and friend's flat have the same area.\n";
    else
        cout << "My flat and friend's flat have different areas.\n";

    if (myFlat > friendFlat)
        cout << "My flat is more expensive than friend's flat.\n";
    else
        cout << "My flat is not more expensive than friend's flat.\n";

    cout << "Friend's flat before assignment from my flat:\n";
    friendFlat.PrintInfo();

    friendFlat = myFlat;

    cout << "Friend's flat after assignment from my flat:\n";
    friendFlat.PrintInfo();

#endif // TASK2

    return 0;
}

