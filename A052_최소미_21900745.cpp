#include <iostream>
#include <string>

using namespace std;
//
int main() {
	int T;
	string s;

	cin >> T;
	cin.ignore();
	for (int j = 0; j < T; j++) {
		getline(cin, s);
		int sum, cnt;
		sum = cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') cnt++;
			else cnt = 0;
			sum += cnt;
		}
		cout << sum << endl;
	}
}