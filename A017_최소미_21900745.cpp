#include <iostream>

using namespace std;

int main(){
    int n=0, answer = 0;
    cin >> n;
    int num[9] = {0};

    do{
        switch (n%10)
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
        case 7: num[7]++;
            break;
        case 8: num[8]++;
            break;
        case 6: 
        case 9: num[6]++;
            break;
        default:
            break;
        }
        n = n/10;
    } while(n > 0);

    num[6] = (num[6]+1)/2;

    int max = 0;
    for(int i=0; i<9; i++){
        if(num[i] > max){
            max = num[i];
        }
    }

    answer = max;

    cout<< answer << endl;
}