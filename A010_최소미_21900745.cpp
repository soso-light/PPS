#include <string>
#include <vector>
#include <iostream>

using namespace std;
/*
* 가장 짧은 길이 리턴.
* 1개 단위 ... answer.length() 단위까지 돌리기
* path 가장 짧은 것 찾기.
*/
int solution(string s) {
    int answer = 0;
    int len = s.length();
    vector<string> path;
    string str, prev = "";
    int num = 0, min = 0;
    int i=0, j=0;
    for(i=1; i<=len; i++){
        num = 0;
        str = "";
        for(j=0; j<len; j+=i){
            //cout << s.substr(j, i) << ", ";
            
            if(j == 0){
                prev = s.substr(j, i);
                if(j+i >= len){
                    str += prev;
                    //cout << str << endl;
                    continue;
                }
                num++;
            }
            else if(prev == s.substr(j, i)){
                num++;
                if(j+i >= len){
                    str += to_string(num) + prev;
                    //cout << str << endl;
                }
            }
            else{
                if(num != 1){
                    str += to_string(num) + prev;
                }else{
                    str += prev;
                }
                //cout << str << ", ";
                prev = s.substr(j, i);
                num = 1;
                if(j+i >= len){
                    str += prev;
                    //cout << str << endl;
                }
            }
        }
        //cout << str << endl;
        if(i == 1){
            min = str.length();
        }else if(min > str.length()){
            min = str.length();
        }
    }
    answer = min;
    return answer;
}

int main(){
    string s;
    getline(cin, s);
    cout << solution(s) << endl;
}