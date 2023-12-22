#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Conversion {
public:
    void BinToDecimal(int binary) {
        int bit;
        int result = 0;
        int i = 0;
        while (binary != 0) {
            bit = binary & 1;
            result = (bit * pow(2, i)) + result;
            i++;
            binary = binary >> 1;
        }
        cout << result;
    }
};

int main() {
    Conversion obj;
    string binStr;
    cout << "Enter binary Number: ";
    cin >> binStr;

    // Convert binary string to integer
    int bin = (binStr, 0, 2);

    obj.BinToDecimal(bin);
    return 0;
}
