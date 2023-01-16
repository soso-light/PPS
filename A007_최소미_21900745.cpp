#include <string>
#include <iostream>

using namespace std;

int main()
{
    int ascending = 0;
    int descending = 0;
    string str;
    int pre=-1;

    getline(cin, str);
    
    for(auto x:str){
        if(x == ' '){
            continue;
        }else if(pre == -1){
            pre = x - '0';
            continue;
        }
        
        //cout << pre;
        if(pre < x - '0'){
            ascending++;
        }else if(pre > x - '0'){
            descending++;
        }
        pre = x - '0';        
    }
    

    if(ascending && !descending){
        cout << "ascending" << endl;
    }else if(descending && !ascending){
        cout << "descending" << endl;
    }else{
        cout << "mixed" << endl;
    }

}