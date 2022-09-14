#include <iostream>
#include <queue>

using namespace std;

queue<int> Q;
int N, K; 

void PUSH_N()
{
	for (int i = 1; i <= N; i++)
	{
		Q.push(i);
	}
}

int main()
{
	cin >> N >> K;
	// 배열 채우기
	PUSH_N();
	cout << "<";
	while (N--)
	{
		// 하나 남은 것 출력 후 종료
		if (Q.size() == 1)
		{
			cout << Q.front() << ">";
			Q.pop();
			break;
		}
		// 앞 사람 반복해서 맨 뒤로 보냄
		for (int i = 1; i < K; i++)
		{
			Q.push(Q.front());
			Q.pop();
		}
		// 맨 앞 POP 
		cout << Q.front() << ", ";
		Q.pop();
	}

	return 0;
}