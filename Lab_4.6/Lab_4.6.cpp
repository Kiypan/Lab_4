#include<iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int k, i;
	S = 1;
	i = 5;
	while (i <= 25)

	{
		P = 0;
		k = 1;
		while (k <= i * i)

		{
			P *= i;
			k++;

		}
		S += sqrt(i * i) + P / i;
		i++;

	}
	cout << S << endl;
	S = 1;
	i = 5;
	do
	{
		P = 0;
		k = 1;
		do
		{
			P *= i;
			k++;
		} while (k <= i * i);
		S += sqrt(i * i) + P / i;
		i++;
	} while (i <= 25);
	cout << S << endl;
	S = 1;
	for (i = 5; i <= 25; i++)

	{
		P = 0;
		for (k = 1; k <= i * i; k++)

		{
			P *= i;

		}
		S += sqrt(i * i) + P / i;

	}
	cout << S << endl;
	S = 1;
	for (i = 25; i >= 5; i--)

	{
		P = 0;
		for (k = i * i; k >= 1; k--)
		{
			P *= i;
		}
		S += sqrt(i * i) + P / i;
	}
	cout << S << endl;
	return 0;
}
