#include <iostream>
#include <string>

using namespace std;
string before = "DEFGHIJKLMNOPQRSTUVWXYZABC";
string after = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(void) {
	string input;
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
	    for (int j = 0; j < before.length(); j++) {
            if (input[i] == before[j]) {
                cout << after[j];
            }
        }
	}
}