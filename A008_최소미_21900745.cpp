#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int i = 0;
    string str;
    string st = "";
    vector<string> score;
    int total = 0;
    int count = 0;
    double avg = 0;
    int up = 0;
    vector<double> average;

    cin >> n;
    cin.ignore();
    for(i=0; i<n; i++){
        total = 0;
        avg = 0;
        count = 0;
        up = 0;
        cin >> count;
        cin.ignore();
        getline(cin, str);
        for(auto x:str){
            if(x == ' '){
                score.push_back(st);
                st = "";
            }else{
                st += x;
            }
        }
        if(st != ""){
            score.push_back(st);
            st = "";
        }
        for(auto x:score){
            //cout << x << ", ";
            total += stoi(x);
            //cout << stoi(x) << endl;
        }
        avg = (double)total / count;
        //cout << avg << endl;

        for(auto x:score){
            if(stoi(x) > (int)avg){
                //cout << stoi(x) << endl;
                up++;
            }
        }
        //cout << up << endl;
        average.push_back((double)up/count * 100);
        
        score.clear();
    }
    cout << fixed;
    cout.precision(3);
    for(auto x:average){
        cout << x << "%" <<endl;
    }

}