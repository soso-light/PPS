#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string s = "";
    getline(cin, s);\
    int idx = 0;

    int i=0, j=0;
    for(i=0; i<croatian.size(); i++){
        while(true){
            idx = s.find(croatian[i]);
            if(idx == string::npos)
                break;
            s.replace(idx,croatian[i].length(),"#");
        }
    }


    cout << s.length() <<endl;

    return 0;
}