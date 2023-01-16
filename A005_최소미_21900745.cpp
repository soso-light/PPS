#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
/*
1. 스킬 외의 값 제거
2. 인덱스값 추출
3. 인덱스값이 순차적 구성이 되어야 함.
* 10시간 이상
*/
int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int temp = 0;
    int next = 0;
    bool go = true;
    int i = 0, j = 0;
    vector<int> test;
    for (j=0; j<skill_trees.size(); j++) {
        go = true;
        for(i=0; i<skill.length(); i++){
            temp = skill_trees.at(j).find_first_of(skill[i]);
            test.push_back(temp);
        }
        for(i=0; i<test.size() - 1; i++){
            temp = test.at(i);
            next = test.at(i+1);
            
            if(temp == -1 && next != -1){
                go = false;
                break;
            }else if(temp > next && next != -1){
                go = false;
                break;
            }
            
        }
        
        if(go){
            answer++;
        }
        
        test.clear();
    }
    return answer;
}

int main() {
    string skill = "CBD";
    vector<string> skill_trees = {"BACDE", "CBADF", "AECB", "BDA"};

    int ans = solution(skill, skill_trees);
    cout << ans << endl;
}