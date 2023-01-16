#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;

    int a = x;
    int h = 0;

    do{
        h += a % 10;

        a = a/10;
    } while(a > 0);

    if(x % h != 0){
        answer = false;
    }


    return answer;
}

int main(){
    int x = 11;
    cout << solution(x) <<endl;
}