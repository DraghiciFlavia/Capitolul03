#include <iostream>

using namespace std;

int main()
{
    int nr,i=0;
    cout << "Scrieti un numar intreg" << endl;
    cin >> nr;

    do
    {
        nr = nr/ 10;
        ++i;
    }while(nr);
   cout << "Numarul introdus de la tastatura are " << i << " cifre";

    return 0;
}
