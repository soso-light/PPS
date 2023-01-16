#include <iostream>

using namespace std;

bool cmp(int a, int b){
    return b < a;
}

int main(){
    int n=0, a=0;
    int m = 0, y=0;
    int i=0;

    cin >> n;
    cin.ignore();
    for(i=0; i<n; i++){
        cin >> a;
        y += (a/30 + 1)*10;
        m += (a/60 + 1)*15;
    }

    if(y == m){
        cout << "Y M " << m << endl;
    }else if(y > m){
        cout << "M " << m << endl;
    }else{
        cout << "Y " << y << endl;
    }
}

//다시 풀기