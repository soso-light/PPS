#include <iostream>
#include <string>

using namespace std;

int main(){
    //입력
    string str;
    int i=0;

    getline(cin, str);
    
    for(i=0; i<str.size(); i++){
        cout << str[i];
        if((i+1)%10 == 0){
            cout << endl;
        }
    }
    return 0;
}