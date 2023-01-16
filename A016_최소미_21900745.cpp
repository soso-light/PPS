#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int first = 0, end = people.size() - 1;
    sort(people.begin(), people.end());

    while(first <= end){
        if(people[first] + people[end] <= limit){
            first++;
        }
        end--;
        answer++;
    }
    return answer;
}

int main(){
    string s;
    int limit = 100;
    vector<int> people = {70, 50, 80, 50};
    int answer = solution(people, limit);
    cout << answer << endl;

}

//70 50 80 50