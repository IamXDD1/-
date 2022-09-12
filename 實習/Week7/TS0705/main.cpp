#include <iostream>
#include <string>

using namespace std;

void chtoi(string& str, int& num) {
    for (int i = 0; i < str.size(); i++) {
        num *= 10;
        switch (str[i])
        {
        case 'V': num += 0; break;
        case 'U': num += 1; break;
        case 'C': num += 2; break;
        case 'D': num += 3; break;
        }
    }
}

int main() {
    int num;
    std::cout << "COWCULATIONS OUTPUT\n";
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        string num1, num2;
        cin >> num1 >> num2;
        //std::cout << "num1 = " << num1 << '\n';
        int i_num1 = 0, i_num2 = 0;

        chtoi(num1, i_num1);
        chtoi(num2, i_num2);

        for (int i = 0; i < 3; i++) {
            char cmd;
            std::cin >> cmd;

            int copy = 0;
            switch (cmd)
            {
            case 'A':
                i_num2 += i_num1;
                for (int i = 1; i_num2 / i; i *= 10) {
                    int temp = (i_num2 / i) % 10;
                    if (temp >= 4) {
                        i_num2 += 6 * i;
                    }
                    //cout << i_num2 << "="  <<'\n';
                }
                break;
            case 'R': i_num2 /= 10; break;
            case 'L': i_num2 *= 10; break;
            }
        }
        string ans;
        cin >> ans;
        int i_ans = 0;
        chtoi(ans, i_ans);

        //cout << i_num2 << "   " << i_ans << '\n';

        if (i_num2 == i_ans) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    std::cout << "END OF OUTPUT\n";
    return 0;
}
