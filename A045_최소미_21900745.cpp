#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    //입력
    int n[26] = {0};
    string str;
    int i=0, max = 0, idx = 0;
    bool issame = false;

    getline(cin, str);
    
    for(i=0; i<str.size(); i++){
        str[i] = toupper(str[i]);
        n[str[i]-'A']++;
    }
    for(i=0; i<26; i++){
        if(max == n[i]){
            issame = true;
        }else if(max < n[i]){
            max = n[i];
            idx = i;
            issame = false;
        }
    }    
    if(issame == true) cout << "?" << endl;
    else cout << (char)(idx+'A') << endl;
    return 0;
}