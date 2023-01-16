#include <string>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n = 0;
    cin >> n;

    set<int> s;

    int i=0, j=0;
    for(i=0; i<n; i++){
        int tmp = 0;
        cin >> tmp;
        s.insert(tmp);
    }

    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << ' ';
    }

    cout << endl;

    return 0;
}