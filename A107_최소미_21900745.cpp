#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
//
using namespace std;

int main(){
    int a=0, b=0, res=0, cnt=1;
    cin >> a >> b;

    for(int i=1; i<=b; i++){
        for(int j=1; j<=i; j++){
            if(cnt >= a && b>=cnt){
                res += i;
            }
            cnt ++;
        }
    }
    cout << res << endl;
    return 0;
}