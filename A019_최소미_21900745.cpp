#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return b < a;
}

int main(){
    int a=0, b = 0, c = 0;
    int mul = 0;
    int num[10] = {0};
    cin >> a;
    cin.ignore();
    cin >> b;
    cin.ignore();
    cin >> c;
    cin.ignore();
    mul = a * b * c;

    do{
        switch (mul%10)
        {
        case 0: num[0]++;
            break;
        case 1: num[1]++;
            break;
        case 2: num[2]++;
            break;
        case 3: num[3]++;
            break;
        case 4: num[4]++;
            break;
        case 5: num[5]++;
            break;
        case 6: num[6]++;
            break;
        case 7: num[7]++;
            break;
        case 8: num[8]++;
            break;
        case 9: num[9]++;
            break;
        default:
            break;
        }
        mul = mul/10;
    } while(mul > 0);

    for(int i=0; i<10; i++){
        cout<< num[i] << endl;
    }
}