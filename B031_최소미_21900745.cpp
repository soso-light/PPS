/*
준하가 구입한 라디오는 매우 하이테크 한데, 그 라디오에는 다음과 같은 버튼이 있다.
* 첫 번째 버튼은 주파수를 1MHz 증가시킨다.
* 두 번째 버튼은 주파수를 1MHz 감소시킨다.
* 나머지 N개의 버튼은 즐겨찾기 기능으로, 미리 지정된 주파수로 이동한다.
준하는 몸이 안좋아 하루에 손가락을 몇 번 움직이지 못하기 때문에 우리의 도움이 필요하다.
현재 주파수 A와 듣고싶은 주파수 B가 주어질 때, 
주파수 A에서 B로 갈 때 눌러야 하는 가장 적은 버튼수를 구해주자.
input
첫 줄엔 정수 A와 B가 주어진다 (1 ≤ A, B < 1000, A ≠ B).
다음 줄엔 정수 N이 주어진다 (1 ≤ N ≤ 5).
다음 N개의 줄엔 미리 지정되어 있는 주파수가 주어진다 (주파수는 1000 보다 작다).
output
주파수 A에서 B로 갈 때 눌러야 하는 버튼수의 최솟값을 출력한다.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int from,to,n,gap,idx=100;
int arr[7];
int main(void)
{
	fast_io();
	cin >> from >> to >> n;
	for (int i = 0;i<n;i++)
		cin >> arr[i];
	gap = abs(to - from);
	for (int i = 0; i < n;i++)
	{
		int tmp = abs(arr[i] - to);
		if (gap > tmp)
		{
			gap = tmp;
			idx = i;
		}
	}
	if(idx!=100)
		cout << abs(arr[idx] - to) + 1;
	else
		cout << abs(to - from);
}