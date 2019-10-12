#include <iostream>

using namespace std;

int main()
{
    unsigned int nr,i=0;
    cout << "Scrieti un numar intreg" << endl;
    cin >> nr;

    while(nr != 0)
    {
        nr = nr/ 10;
        i++;
    }
    cout << "Numarul introdus de la tastatura are " << i << " cifre";
    return 0;
}
