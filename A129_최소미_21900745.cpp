/*
정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오
input
첫째 줄에 테스트 케이스의 개수 T가 주어진다. 
각 테스트 케이스는 한 줄로 이루어져 있고, 정수 n이 주어진다. 
n은 양수이며 11보다 작다.
output
각 테스트 케이스마다, n을 1, 2, 3의 합으로 나타내는 방법의 수를 출력한다.
*/
#include <iostream>
#include <vector>
//
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;
    cin >> T;

    vector<int> dp(12, 0);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i < 12; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    

    for (int i = 0; i < T; i++)
    {
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}