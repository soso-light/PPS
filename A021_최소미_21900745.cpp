#include <iostream>
#include <vector>

using namespace std;

bool cmp(int a, int b){
    return b < a;
}

int main(){
    int n=0, a=0;
    int answer = 0;
    vector<int>con;
    int i=0;

    cin >> n;
    cin.ignore();
    for(i=0; i<n; i++){
        cin >> a;
        con.push_back(a);
        cin.ignore();
    }

    for(i=0; i<n; i++){
        if(i == n-1){
            answer += con.at(i);
        }else{
            answer += con.at(i) - 1;
        }
    }

    cout<< answer << endl;

}