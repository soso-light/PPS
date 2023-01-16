#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<int, float> a, pair<int, float> b)
{
    if (a.second == b.second)  // 실패율이 같다면
        return a.first < b.first;  // 이름(int) 기준 오름차순
    else
        return a.second > b.second; // 실패율(float) 기준 내림차순
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer(N);

    vector<int> all(N);
    vector<int> success(N);
    vector<pair<int, float>> temp(N);

    // all, success 업데이트
    for (int i = 0; i < stages.size(); i++)
    {
        for (int j = 0; j < stages[i] && j < N; j++)
            all[j]++;
        for (int j = 0; j < stages[i] - 1; j++)
            success[j]++;
    }

    // 스테이지와 실패율 매칭 pair
    for (int i = 0; i < N; i++)
    {
        // 아무도 도달한적이 없는 스테이지라면, 즉 all[i] = 0 이라면 실패율은 0 으로.
        float fail = (all[i] == 0? 0 : (all[i] - success[i]) / (float)all[i]); 
        temp[i] = make_pair(i + 1, fail);
    }

    sort(temp.begin(), temp.end(), compare); // 실패율 기준 정렬

    for (int i = 0; i < N; i++)
        answer[i] = temp[i].first;

    return answer;
}

/*
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer, number(N+1);
    vector<double> total(N);
    int size = stages.size();
    double temp = -1, max[2] = {-1};
    int position = -1;
    int i = 0, j = 0;
    
    number에 반복하면서 해당 i+1에 들어가는 숫자 넣기.
    total 앞에서부터 number/size, size - number.at(i-1), ...
    
    for(i=0; i<size; i++){
        for(j=0; j<N+1; j++){
            if(stages.at(i) == j+1){
                number.at(j)++;
                break;
            }
        }
    }
    for(i=0; i<N; i++){
        //cout << (double)number.at(i)/size << endl;
        total.at(i) = (double)number.at(i)/size;
        size = size - number.at(i);
    }
    double n=0.0;
    for(i=0; i<N; i++){     //answer
        //cout << total.at(i) << endl;
        temp = -1;
        position = -1;
        for(j=0; j<N; j++){ //total
            n = total.at(j);
            if((n > temp) &&((max[0] == -1) || ((max[0] > n) || ((max[0] == n) && (max[1] < j))))){
                temp = total.at(j);
                position = j;
                if((max[0] == n) && (max[1] < j)){
                    break;
                }
            }
        }
        max[0] = temp;
        max[1] = position;
        answer.push_back(position+1);
    }
    return answer;
}
*/

int main(){
    string s;
    int N;
    cin >> N;
    cin.ignore();
    getline(cin, s);
    
    int i=0, j=0;
    int len = s.length();
    string prev = "";
    vector<int> stages;

    for(i=0; i<len; i++){
        if(s[i] == ' '){
            stages.push_back(stoi(prev));
            //cout << stoi(prev) << ", ";
            prev = "";
        }else{
            prev += s[i];
        }
    }
    if(prev != ""){
        stages.push_back(stoi(prev));
        //cout << stoi(prev) << endl;
    }
    vector<int> answer = solution(N, stages);
    for(auto x: answer){
        cout << x << endl;
    }
}

//꼭 다시 보기