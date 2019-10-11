#include <iostream>

using namespace std;

int main()
{
   short trimestru, profitTrimestru1 = 3000 , profitTrimestru2 = 5000, profitTrimestru3 = 4000, profitTrimestru4 = 2500, bilant = 8375;
   cout << " Profitul carui trimestru doriti sa verificati?(1-4)" << endl;
   cin >> trimestru;

   switch (trimestru)

     {
        case 1 : cout << "Profitul firmei in trimestru I este " << profitTrimestru1 << " si bilantul anului anterior este " << bilant; break;
        case 2 : cout << "Profitul firmei este " << profitTrimestru2 << endl; break;
        case 3 : cout << "Profitul firmei este " << profitTrimestru3 << endl; break;
        case 4 : cout << "Profitul firmei este " << profitTrimestru4 << endl; break;
        default : cout << "Introduceti un trimestru valid";
     }

    return 0;
}
