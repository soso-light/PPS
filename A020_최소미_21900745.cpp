#include<iostream>

using namespace std;

int main()
{
    int in[4] = {0};
    int out[4] = {0};
    int max = 0;
    int temp = 0;
    int i = 0;
    int station_num = 4;

    for(i=0; i<station_num; i++){
        cin >> out[i] >> in[i];
        temp = temp + in[i] - out[i];
        if(max<temp) max = temp;
    }

    cout << max << endl;
    return 0;
}