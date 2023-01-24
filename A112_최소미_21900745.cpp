/*
강토가 사용하는 기타에서 N개의 줄이 끊어졌다.
따라서 새로운 줄을 사거나 교체해야 한다.
강토는 되도록이면 돈을 적게 쓰려고 한다.
6줄 패키지를 살 수도 있고, 1개 또는 그 이상의 줄을 낱개로 살 수도 있다.

끊어진 기타줄의 개수 N과 기타줄 브랜드 M개가 주어지고,
각각의 브랜드에서 파는 기타줄 6개가 들어있는 패키지의 가격, 
낱개로 살 때의 가격이 주어질 때,
적어도 N개를 사기 위해 필요한 돈의 수를 최소로 하는 프로그램을 작성하시오.

input
첫째 줄에 N과 M이 주어진다. (N<=100, M<=50)
둘째 줄부터 M개의 줄: 각 브랜드의 패키지 가격과 낱개의 가격이 공백으로 구분하여 주어진다.
0 <= 가격 <= 1,000

output
첫째 줄에 기타줄을 적어도 N개 사기 위해 필요한 돈의 최솟값을 출력한다.
*/
#include <vector>
#include <iostream>

using namespace std;
int main() {
    int N = 0, M = 0, x = 0, y = 0;
    int set = 1000, single = 1000;
    cin >> N >> M;

    while(M--) {
        cin >> x >> y;
        set = min(set, x);
        single = min(single, y);
    }
	
    cout << min((N/6+1)*set, min(N/6*set + N%6*single, N*single)) << '\n';
}
/*
int main(){
    int n=0, m=0;
    int a=0, b=0;
    int cost = 0, min = 1000;
    int i=0, j=0;
    vector<int> p1, p2;     //save price

    cin >> n >> m;
    cin.ignore();

    for(i=0; i<m; i++){
        cin >> a >> b;
        cin.ignore();

        p1.push_back(a);
        p2.push_back(b);
    }

    for(i=0; i<m; i++){
        if(n%6 == 0){
            cost = p2.at(i) * n;
        //    cout << " (" << cost << ") ";
            if(cost < min){
                min = cost;
            }
            cost = p1.at(i) * (n / 6);
        //    cout << " (" << cost << ") ";
            if(cost < min){
                min = cost;
            }
        }
        else{
            cost = p1.at(i) * (n / 6);
            a = cost;
            for(j=0; j<m; j++){
                cost = a + p2.at(j) * (n % 6);
        //        cout << " (" << cost << ") ";
                if(cost < min){
                    min = cost;
                }
            }
            
            cost = a + p1.at(i);
        //    cout << " (" << cost << ") ";
            if(cost < min){
                min = cost;
            }

            cost = p2.at(i) * n;
        //    cout << " (" << cost << ") ";
            if(cost < min){
                min = cost;
            }
        }
        //cout << " [" << min << "] " << endl;
    }
    cout << min <<endl;
    return 0;
}
*/

