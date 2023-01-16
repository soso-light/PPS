#include <queue>
#include <iostream>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    int n;
    int i = 0;
    queue<int> q;

    cin >> n ;
    for(i=1; i<=n; i++){
        q.push(i);
    }

    while(q.size() > 1){
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front() << endl;
    return 0;
}