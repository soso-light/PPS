#include <string>
#include <iostream>
//#include <cstring>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int i=0;
    int cp=0, cy=0;
    //p & y의 값이 같으면 참
    for(i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
        if(s[i] == 'p'){
            cp++;
        }else if(s[i] == 'y'){
            cy++;
        }
    }

    if(cy == cp){
        answer = true;
    }else{
        answer = false;
    }

    return answer;
}

int main()
{
    cout << solution("pPoooyY") << endl;
}