/*
잡화점에는 잔돈으로 500엔, 100엔, 50엔, 10엔, 5엔, 1엔이 충분히 있고,
언제나 거스름돈 개수가 가장 적게 잔돈을 준다.
타로가 잡화점에서 물건을 사고 카운터에서 1000엔 지폐를 한장 냈을 때,
받을 잔돈에 포함된 잔돈의 개수를 구하는 프로그램을 작성하시오.

input

output

*/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int cost = 0;
    int n = 0;

    cin >> cost;
    cost = 1000 - cost;

    n += cost / 500;
    cost = cost % 500;
    n += cost / 100;
    cost = cost % 100;
    n += cost / 50;
    cost = cost % 50;
    n += cost / 10;
    cost = cost % 10;
    n += cost / 5;
    cost = cost % 5;
    n += cost / 1;

    cout << n << endl;
}