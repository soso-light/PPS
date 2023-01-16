#include <iostream>
#include <set>

using namespace std;

int main(){
    //입력
    set<int> mod;
    int temp = 0;
    int i=0;
    for(i=0; i<10; i++){
        cin >> temp;
        cin.ignore();
        mod.insert(temp%42);
    }

    cout<< mod.size() << endl;

    return 0;
}