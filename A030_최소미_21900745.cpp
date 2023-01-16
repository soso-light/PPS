#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //입력
    int n=0; 
    double a=0.0, b=0.0, c=0.0, d=0.0;
    double happy = 0.0, bad = 0.0;
    double temph = 0.0, tempb = 0.0;
    bool first = true;
    cin >> n;
    cin >> first;
    cin.ignore();
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if(first == true){
        happy = c;
        bad = d;
    }else{
        happy = a;
        bad = b;
    }

    for(int i=1; i<n; i++){
        temph = happy*a + bad*c;
        tempb = happy*b + bad*d;
        happy = temph;
        bad = tempb;
    }
    happy *= 1000;
    bad *= 1000;

    cout<< (int)happy << endl;
    cout<< (int)bad << endl;

    return 0;
}
