#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    //입력
    int n=0;
    int m=0;
    double temp = 0.0;
    string str;
    vector<double> num;
    int i=0, j=0;

    cin >> n;
    m=n;
    cin.ignore();
    while(n--){
        cin >> temp;
        temp *= 1.0;
        getline(cin, str);
        //cout << temp << " ";
        for(j=0; j<str.size(); j++){
            switch (str[j])
            {
            case '@':
                temp *= 3.0;
                //cout << temp << " ";
                break;
            case '%':
                temp += 5.0;
                //cout << temp << " ";
                break;
            case '#':
                temp -= 7.0;
                //cout << temp << " ";
                break;
            
            default:
                break;
            }
        }
        //cout << temp << endl;
        num.push_back(temp);
    }

    cout << fixed;
    cout.precision(2);
    for(i=0; i<m; i++){
        printf("%.2f\n", num.at(i));
    }
    
    return 0;
}