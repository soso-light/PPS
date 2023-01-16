#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int i, int j){
    return j<i;
}

int main(){
    string n = "";
    vector<char> str;
    cin >> n;

    for(int i=0; i<n.length(); i++){
        str.push_back(n[i]);
    }
    sort(str.begin(), str.end(), compare);

    for(auto x: str){
        cout << x;
    }
    cout << endl;
    return 0;
}