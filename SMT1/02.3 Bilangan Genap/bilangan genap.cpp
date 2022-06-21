#include <iostream>
using namespace std;

main()
{
    //DEKLARASI
    int i;

    i = 1;

    while (i++, i <= 100)
    {
        if (i%2 == 0)
        {
            cout<<i<<endl;
        }
    }
    return 1;
}
