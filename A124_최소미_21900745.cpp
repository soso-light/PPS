/*
정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.
input
첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.
output
N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다. N이 1인 경우 아무것도 출력하지 않는다.
*/
#include <iostream>

using namespace std;

int n;

int main(){
    cin >> n;
    
    int i=0;
    for(i=2; i*i <= n; i++){
        while(n%i==0){
            cout << i << endl;
            n /= i;
        }
    }
    if(n>1){
        cout << n << endl;
    }
    return 0;
}