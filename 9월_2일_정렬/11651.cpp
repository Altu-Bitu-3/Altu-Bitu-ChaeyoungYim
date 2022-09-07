#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<pair<int, int>> xy;
	int x, y;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		//입력 순서를 바꿈
		xy.push_back({y, x});
	}

	//정렬
	sort(xy.begin(), xy.end());

	//출력 순서를 바꿈
	for (int i = 0; i < N; i++)
		cout << xy[i].second << " " << xy[i].first << '\n';

	return 0;
}