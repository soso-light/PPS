#include <string>
#include <vector>
#include <iostream>
//
using namespace std;

string solution(int a, int b) {
    int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    string day[] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    
    int sum = b;
    
    for(int i=0; i<a-1; i++){
        sum += month[i];
    }

    return day[sum%7];
}

int main(){
    int a = 5, b = 24;
    cout << solution(a, b) << endl;
}