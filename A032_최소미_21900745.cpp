#include <iostream>
#include <vector>

using namespace std;
//
int getNum(int a, int b){
  if(b == 1)
    return 1;
  if(a == 0)
    return b;
  return (getNum(a-1, b) + getNum(a, b-1));
}

int main(){
    //입력
    int k=0, n=0, m=0; 
    int i=0;
    vector<int> num;
    cin >> k;
    cin.ignore();
    for(i=0; i<k; i++){
        cin >> n >> m;
        num.push_back(getNum(n,m));
    }
    for(i=0; i<k; i++){
        cout<< num.at(i) << endl;
    }

    return 0;
}
