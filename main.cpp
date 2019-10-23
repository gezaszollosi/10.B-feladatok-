#include <iostream>

using namespace std;

int main()


{
    int szam,b,c,d,e=0;
    cout << "Add meg a szamot=";
    cin >> szam;
    d=0;
    b=szam;
    while(b > 0)
    {
        c=b % 10;
        b= b / 10;
        if(c % 2 != 0)
        {
            e=c-1;
            d=d*100 + c*10 + e;
        }
        else
        {
            d=d*10 + c;
        }
    }
    cout << d;

    return 0;

}
