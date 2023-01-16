#include <queue>
#include <iostream>

using namespace std;

int n = 0, k = 0;
queue<int> q;

int main(){

    int i = 0;
    cin >> n >> k;

    for(i=1; i<=n; i++){
        q.push(i);
    }


    cout << "<" ;
    while (q.size() != 0)
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
    cout << ">" << endl;
    return 0;
}