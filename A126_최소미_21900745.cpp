/*
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 
등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. 
N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
input
첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.
output
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
*/
#include <iostream>
//
using namespace std;

bool number(int a){
    if(a < 100)
        return true;
    int a1, a2, a3;
    a3 = a / 100;
    a1 = a % 10;
    a2 = a % 100 / 10;
    if(a3-a2 == a2-a1)
        return true;
    return false;
}
int main(void){
    int N, count = 0;
    cin>>N;
    for(int i =1; i <= N; i++){
        if(number(i))
            count++;
        }
    cout<<count;
}