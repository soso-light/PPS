#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    vector<int>::iterator iter;
    for (iter = arr.begin(); iter != arr.end(); iter++) {
        if(*iter % divisor == 0) {
            //cout << *iter << " ";
            answer.push_back(*iter);
        }
    }

    if(answer.empty()){
        answer.push_back(-1);
    }else{
        sort(answer.begin(), answer.end());
    }
        
    return answer;
}

int main() {
    vector<int> arr = {2, 36, 1, 3};
    int divisor = 1;
    vector<int> sol = solution(arr, divisor);

    vector<int>::iterator iter;
    for (iter = sol.begin(); iter != sol.end(); iter++) {
        cout << *iter << " ";
    }
        
}