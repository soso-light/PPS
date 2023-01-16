#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = s;

    bool isspace = true;
    for(int i=0; i<answer.length(); i++){
        if(answer[i] == ' '){
            isspace = true;
        }else if(isspace){
            answer[i] = toupper(answer[i]);
            isspace = false;
        }else{
            answer[i] = tolower(answer[i]);
        }
    }
    return answer;
}

int main(){
    string str = "3people unFollowed me";
    cout << solution(str) << endl;
}