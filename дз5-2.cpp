/*Reccur14  Написать рекурсивную функцию для вычисления суммы :
 S = x + x^2 + x^3 + x^4 + x^5 ...
 содержащей N первых членов (N - натуральное число, N<20, x, S - вещественные)*/

#include <iostream>
#include <cmath>

using namespace std;

float rec(float S, int N, float x)
{
	if (N == 1)
		return x;
	else
	{
		return pow(x,N) + rec(S, N - 1, x);
	}
}

int main()
{
	int N;
	float S=0, x;
	cin >> N >> x;
	cout << rec(S, N, x);
}

// N = 4, x = 2 -> 30
// N = 9, x = 0,71 -> 2.33603
// N = 15, x = -0.94 -> - 0.676069
// N = 8, x = -0.58 -> - 0.362388
