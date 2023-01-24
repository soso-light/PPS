/*
이진 검색 트리를 전위 순회한 결과가 주어졌을 때, 이 트리를 후위 순회한 결과를 구하는 프로그램을 작성하시오.
input
트리를 전위 순회한 결과가 주어진다. 노드에 들어있는 키의 값은 106보다 작은 양의 정수이다. 
모든 값은 한 줄에 하나씩 주어지며, 노드의 수는 10,000개 이하이다. 같은 키를 가지는 노드는 없다.
output
입력으로 주어진 이진 검색 트리를 후위 순회한 결과를 한 줄에 하나씩 출력한다.
*/
#include <iostream>
#include <vector>
using namespace std;

//0<= node <=10000

int tree[10000];
void postOrder(int start, int end) {
	if (start >= end) {
		return;
	}
	if (start == end - 1) {
		cout << tree[start] << '\n';
		return;
	}
	int idx = start + 1;
	while (idx<end) {
		if (tree[start]<tree[idx]) {
			break;
		}
		idx++;
	}
	
	postOrder(start+1, idx);
	postOrder(idx, end);
	cout << tree[start] << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int num;
	int inputIdx = 0;
	while (cin >> num) {
		tree[inputIdx++] = num;
	}

	postOrder(0,inputIdx);



	return 0;
}