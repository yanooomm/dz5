// Reccur4 Написать реккурсивный алгоритм нахождения максимальной цифры целого числа N

#include <iostream>

using namespace std;

void rec(int a, int &MaxVar)
{
	int n = a % 10;
	if (n > MaxVar)
		MaxVar = n;
	if (a > 10)
		rec(a /= 10, MaxVar);
}


int main()
{
	int a;
	cin >> a;
	int MaxVar = 0;
	rec(a, MaxVar);
	cout << MaxVar;
}

// 1234321 -> 4
// 11111 -> 1
// 0987890 -> 9
