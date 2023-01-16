#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<pair<int, int>> v;

int main() {
	int N;
	cin >> N;
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
	return 0;
}
/*
int main() {
    int N;
	cin >> N;
    int a=0, b=0;
    int i=0;
	for (i = 0; i < N; i++) {
		cin >> a >> b;
		v.push_back({a, b});
	}
    sort(v.begin(), v.end());
    for(i=0; i<N; i++){
        cout << v.at(i).first << ' ' << v.at(i).second << endl;
    }
    return 0;
}
*/