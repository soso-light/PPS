#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
    int asize = a.size();
	int bsize = b.size();
	int asum = 0;
	int bsum = 0;

	// 1. 길이가 다르면, 짧은 순서대로 정렬
	if (asize != bsize) {
		return asize < bsize;
	}

	// 2. 길이가 같다면, 합을 이용해 작은 순서대로 정렬
	for (int i = 0; i < a.size(); i++) {
		// 문자열 a에 포함된 숫자들의 합 계산
		if (a[i] >= '0' && a[i] <= '9') {
			asum += int(a[i]) - 48;
		}

		// 문자열 b에 포함된 숫자들의 합 계산
		if (b[i] >= '0' && b[i] <= '9') {
			bsum += int(b[i]) - 48;
		}
	}

	if (asum != bsum) {
		return asum < bsum;
	}


	// 3. 1,2 로 비교 불가능하다면, 사전순으로 비교
	return a < b;
}

int main(){
    int n = 0, a = 0;
    string s = "";
    cin >> n;
    cin.ignore();

    vector<string> v;

    int i=0, j=0;
    for(i=0; i<n; i++){
        getline(cin, s);
        v.push_back(s);
    }

    sort(v.begin(), v.end(), cmp);

    for(auto x:v){
        cout << x <<endl;
    }
    return 0;
}