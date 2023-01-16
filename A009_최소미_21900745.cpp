#include <string>
#include <vector>
#include <iostream>

//엥 너무 쉬운데 벡터도 필요 엄슴.

using namespace std;

bool solution(string s) {
    bool answer = true;
    /*
    s.length == 4 || 6
    숫자(t), 영어대소문자(f)
    */
    if(s.length()!=4 && s.length()!=6){
        answer = false;
    }else{
        for(auto x:s){
            if(!isdigit(x)){
                answer = false;
                break;
            }
        }
    }
    return answer;
}

int main(){
    string s;
    getline(cin, s);
    cout << solution(s) << endl;
}