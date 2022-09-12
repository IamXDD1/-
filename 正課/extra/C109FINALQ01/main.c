#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 char* intToRoman(int num) {
    char Ans[100];
    strcpy(Ans, "");
    for (int i = 0; num > 0; i++)
    {
        if (num - 1000 >= 0) {
            strcat(Ans, "M");
            num -= 1000;
        }
        else if (num - 900 >= 0) {
            strcat(Ans, "CM");
            num -= 900;
        }
        else if (num - 500 >= 0) {
            strcat(Ans, "D");
            num -= 500;
        }
        else if (num - 400 >= 0) {
            strcat(Ans, "CD");
            num -= 400;
        }
        else if (num - 100 >= 0) {
            strcat(Ans, "C");
            num -= 100;
        }
        else if (num - 90 >= 0) {
            strcat(Ans, "XC");
            num -= 90;
        }
        else if (num - 50 >= 0) {
            strcat(Ans, "L");
            num -= 50;
        }
        else if (num - 40 >= 0) {
            strcat(Ans, "XL");
            num -= 40;
        }
        else if (num - 10 >= 0) {
            strcat(Ans, "X");
            num -= 10;
        }
        else if (num - 9 >= 0) {
            strcat(Ans, "IX");
            num -= 9;
        }
        else if (num - 5 >= 0) {
            strcat(Ans, "V");
            num -= 5;
        }
        else if (num - 4 >= 0) {
            strcat(Ans, "IV");
            num -= 4;
        }
        else if (num - 1 >= 0) {
            strcat(Ans, "I");
            num -= 1;
        }
    }
    return Ans;
}

int main()
{
    int num;
    for (; scanf("%d", &num);)
    {
	    printf("%s\n", intToRoman(num));
    }
	return 0;
}