#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	int N;
	cout << "Введiть розмiр матрицi" << endl;
	cin >> N;
	cout << "Елементи матрицi" << endl;
	int arr[100][100];
	int ret[100];
	int m;

	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j<N; j++)
			cin >> arr[i][j];
	}
	cout << "Матриця:" << endl;
	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j<N; j++)
			cout << arr[i][j] << "  ";
		cout << endl;
	}
	cout << "Мiнiмальнi значення:" << endl;
	for (int i = 0; i<N; i++)
	{
		ret[i] = arr[i][0];
		for (int j = 0; j<N; j++)
		{
			if (arr[i][j]<ret[i])
				ret[i] = arr[i][j];
		}
		cout << ret[i] << "  ";
	}
	cout << endl;
	m = ret[0];
	for (int i = 1; i<N; i++)
	{
		if (ret[i]>m)
			m = ret[i];
	}
	cout << "MAX of MIN" << endl << m << endl;
	cout << "INDEXES" << endl;
	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j<N; j++)
		if (arr[i][j] == m)
			cout << i + 1 << "  " << j + 1 << endl;
	}
}
