#include <iostream>

using namespace std;

int main(){
    //입력
    int total[5] = {0};
    int temp = 0, max=0, idx=0;
    int i=0, j=0;
    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            cin >> temp;
            total[i] += temp;
        }
        cin.ignore();
        if(max < total[i]){
            max = total[i];
            idx = i+1;
        }
    }

    cout<< idx << ' ' << max << endl;

    return 0;
}