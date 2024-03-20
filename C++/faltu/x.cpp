#include <iostream>
using namespace std;
#include <string>

int word(string &str){
 int count = 0;
        int size = str.length();
        int n = size - 1;

        while (n >= 0 && str[n] == ' ') {
            n--;
        }

        while (n >= 0 && str[n] != ' ') {
            count++;
            n--;
        }

        return count;
}



int main()
{

    string strr = "a";
    int x;
    x = word(strr);
    cout << x;
}
