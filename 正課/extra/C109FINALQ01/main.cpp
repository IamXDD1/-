#include <iostream>
#include <string>

using namespace std;

string intToRoman(int num) {
    string Ans = "";
    for (int i = 0; num > 0; i++)
    {
        if (num - 1000 >= 0) {
            Ans += "M";
            num -= 1000;
        }
        else if (num - 900 >= 0) {
            Ans += "CM";
            num -= 900;
        }
        else if (num - 500 >= 0) {
            Ans += "D";
            num -= 500;
        }
        else if (num - 400 >= 0) {
            Ans += "CD";
            num -= 400;
        }
        else if (num - 100 >= 0) {
            Ans += "C";
            num -= 100;
        }
        else if (num - 90 >= 0) {
            Ans += "XC";
            num -= 90;
        }
        else if (num - 50 >= 0) {
            Ans += "L";
            num -= 50;
        }
        else if (num - 40 >= 0) {
            Ans += "XL";
            num -= 40;
        }
        else if (num - 10 >= 0) {
            Ans += "X";
            num -= 10;
        }
        else if (num - 9 >= 0) {
            Ans += "IX";
            num -= 9;
        }
        else if (num - 5 >= 0) {
            Ans += "V";
            num -= 5;
        }
        else if (num - 4 >= 0) {
            Ans += "IV";
            num -= 4;
        }
        else if (num - 1 >= 0) {
            Ans += "I";
            num -= 1;
        }
    }
    return Ans;
}

int main()
{
    int num;
    for (; cin >> num;)
    {
        cout << "Original integer: " << num << '\n';
        cout << "Roman number of the said integer: " << intToRoman(num) << '\n';
    }
    return 0;
}