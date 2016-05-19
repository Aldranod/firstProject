#include <iostream>

using namespace std;
string imie;
int dlugosc;
int ostatnia_l;

int main()
{

    cout << "Podaj imie: "<< endl;
    cin >> imie;

    int dlugosc=imie.length();

    if (imie[dlugosc-1]=='a')
    {
        cout <<"Jestes dziewczynka!"<<endl;

    }
    else{cout <<"Jestes chlopcem!"<<endl;}

    return 0;
}
