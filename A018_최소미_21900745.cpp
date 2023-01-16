#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return b < a;
}

int main(){
    int n=0, answer = 0;
    cin >> n;
    cin.ignore();
    vector<int> a(n);
    vector<int> b(n);
    int x=0, i=0;
    for(i=0; i<n; i++){
        cin>>x;
        a.at(i) = x;
    }
    cin.ignore();
    for(i=0; i<n; i++){
        cin>>x;
        b.at(i) = x;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), cmp);

    for(i=0; i<n; i++){
        answer += a.at(i) * b.at(i);
    }


    cout<< answer << endl;
}