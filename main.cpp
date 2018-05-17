// z11_6.cpp : Defines the entry point for the console application.
// program przeliczajacy brytyjskie jednostki wagi -> przeciazenia operatorow w zastosowaniu z klasami
// 17.05.2018.

#include <iostream>
#include "stone.cpp"


int main()
{
    using std::cout;
    using std::cin;
    Stonewt tab[6] = { 20,15,11 };
    int i, k;

    for (i = 3; i < 6; ++i)
    {
        cout << "Podaj ciezar w funtach dla wartosci " << i << " : ";
        double a;
        cin >> a;
        tab[i] = Stonewt(a);
    }

    for (i = 0; i < 6; ++i)
    {
        cout << i << " : ";
        tab[i].show_lbs();
        //cout << "\t";
    }
    Stonewt temp(0);
    if(temp<tab[0])
        tab[0].show_lbs();

    for (i = 0; i < 6; ++i)
    {
        if (tab[i] > temp)
        {
            k = i;
            temp = tab[i];
        }
    }
    cout << "element najwiekszy: " << k <<std::endl;

    temp = tab[0];
    k = 0;
    for (i = 1; i < 6; ++i)
    {
        if (tab[i] < temp)
        {
            k = i;
            temp = tab[i];
        }
    }
    cout << "element najmniejszy: " << k << std::endl;

    int a = 0;
    Stonewt t(11 * 14);
    for (i = 0; i < 6; ++i)
    {
        if (tab[i] >= t)
            a++;
    }

    cout << "Liczba elementow wieszych niz 11 kamieni to : " << a;
    return 0;
}

