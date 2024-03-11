#include<iostream>
#include<string>
using namespace std;

class Conversion{
    public:
        void decimalToBin(int decimal){
            int bit;
            string result;
            while(decimal != 0){
                bit = decimal & 1;
                decimal = decimal>>1;
                result = to_string(bit)+result;
            }
            cout<<"the binary of the number is "<<result;
        }
};

int main(){
    Conversion obj;
    int dec;
    cout<<"Enter Decimal Number : ";
    cin>>dec;
    obj.decimalToBin(dec);
    return 0;
}
