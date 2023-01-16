#include <iostream>
#include <string>

using namespace std;
int N;
int alphabet[26];
string s = "abcdefghijklmnopqrstuvwxyz";

int main(void) {
	cin >> N;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		alphabet[input[0] - 'a']++;
	}
	bool predaja = true;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] >= 5) {
			cout << s[i];
			predaja = false;
		}
	}
	if (predaja) cout << "PREDAJA";
}

/*
int main(){
    int n=0;
    int num[26] = {0};
    string s = "abcdefghijklmnopqrstuvwxyz";
    bool PREDAJA = true;
    string str;
    int i=0;
    cin >> n;
    for(i=0; i<n; i++){
        getline(cin, str);
        num[str[0] - 'a']++;
        str = "";
    }
    for(i=0; i<26; i++){
        if(num[i] >=5){
            cout << s[i];
            PREDAJA = false;
        }
    }
    if(PREDAJA) cout << "PREDAJA" <<endl;

}*/