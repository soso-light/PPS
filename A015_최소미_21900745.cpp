#include <iostream>

using namespace std;

int main(){
    int n=0, total=0, answer = 0;
    for(int i=0; i<5; i++){
        cin >> n;
        total = total + n*n;
    }
    cout<< total%10 << endl;
}