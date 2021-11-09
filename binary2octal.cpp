#include <iostream>
#include <cmath>
using namespace std;
int convert(long long);
int main()
{
    long long bin;
    cout << "Enter a Binary number " << endl;
    cin >> bin;
    cout << bin << " in binary = " << (convert(bin)) << " in octal" << endl;

    return 0;
}
int convert(long long bin)
{
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0)
    {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0)
    {
        oct += (dec % 8) * i;
        cout<<" oct= "<<oct<<endl;
        dec /= 8;
        i *= 10;
    }
    return oct;
}