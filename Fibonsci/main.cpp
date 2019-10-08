#include <iostream>

using namespace std;

int main()
{
    unsigned short a = 1,b =1, c;
    unsigned short nr;
    cout << "Scrieti un numar " << endl;
    cin >> nr;

    do
    {
       c = a + b;
       a = b;
       b = c;

    }while (c <= nr );

    cout << "Nr din sirul Fibonnaci cel mai aproape de " << nr << " este " << (c == nr ? c:a) << endl;
    return 0;
}
