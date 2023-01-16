#include <iostream>

using namespace std;

int main(){
    string a, b;
    cin >> a;
    cin >> b;

    int lenA = a.length();
    int lenB = b.length();

    if (lenB > lenA) {
        swap(a, b);
        swap(lenA, lenB);
    }

    string tmp = "";
    if (lenA != lenB){
        for (int i=0; i<(lenA-lenB); i++)
            tmp += "0";
    }
    b = tmp+b;

    string ans = "";
    int carry = 0;
    int x, y, digit;
    for (int i=lenA-1; i>=0; i--){
        x = a[i] - '0';
        y = b[i] - '0';
        digit = x + y;
        if (carry == 1) {
            digit++;
            carry = 0;
        }
        if (digit > 9)
            carry = 1;
        ans += digit%10 + '0'; 
    }

    if (carry == 1)
        ans += "1";


    for (int i=ans.length() - 1; i>=0; i--){
        cout << ans[i];
    }

}

//다시 보자