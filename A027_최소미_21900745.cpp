#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int size = number.size() - k;
    int idx = 0;

    for(int i = 0; i < size; i++){
        char maxint = number[idx];
        int maxidx = idx;
        for(int j = idx; j <= k+i; j++){
            if(maxint < number[j]){
                maxint = number[j];
                maxidx = j;
            }
        }
        idx = maxidx + 1;
        answer += maxint;
    }

    return answer;
}

int main(){
    string number = "1924";
    int k = 2;
    cout << solution(number, k) <<endl;
}