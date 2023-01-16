#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s = "";
    string tmp = "";

    getline(cin, s);

    vector<string> v;

    int i=0, j=0;
    for(i=0; i<s.length(); i++){
        tmp = s.substr(i, s.length()-i);
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for(i=0; i<v.size(); i++){
        cout << v.at(i) <<endl;
    }
    return 0;
}