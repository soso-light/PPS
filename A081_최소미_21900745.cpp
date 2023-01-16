#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n = 0, a = 0;
    string s = "";
    cin >> n;
    cin.ignore();

    vector<int> v;
    vector<int> ans;

    int i=0, j=0;
    for(i=0; i<n; i++){
        for(j=0; j<10; j++){
            cin >> a;
            v.push_back(a);
        }
        cin.ignore();

        sort(v.begin(), v.end());
        ans.push_back(v.at(7));
        v.clear();
    }

    for(auto x:ans){
        cout << x <<endl;
    }
    return 0;
}