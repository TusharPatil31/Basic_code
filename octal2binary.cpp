#include <iostream>
#include <cmath>
using namespace std;
long long convert(int);
int main()
{
    int oct;
    cout << "Enter a Binary number " << endl;
    cin >> oct;
    cout << oct << " in octal = " << (convert(oct)) << " in binary" << endl;

    return 0;
}
long long convert(int oct)
{
    int dec = 0, i = 0;
    long long bin = 0;

    // converting octal to decimal
    while (oct != 0)
    {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;

    // converting decimal to binary
    while (dec != 0)
    {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}