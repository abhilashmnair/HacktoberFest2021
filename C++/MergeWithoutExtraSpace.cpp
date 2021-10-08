#include <bits/stdc++.h>
using namespace std;
void merge(int ar1[], int ar2[], int m, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		int j, last = ar1[m - 1];
		for (j = m - 2; j >= 0
			&& ar1[j] > ar2[i]; j--)
			ar1[j + 1] = ar1[j];
		if (j != m - 2 || last > ar2[i])
		{
			ar1[j + 1] = ar2[i];
			ar2[i] = last;
		}
	}
}
int main()
{
	int ar1[] = { 1, 5, 9, 10, 15, 20 };
	int ar2[] = { 2, 3, 8, 13 };
	int m = sizeof(ar1) / sizeof(ar1[0]);
	int n = sizeof(ar2) / sizeof(ar2[0]);
	merge(ar1, ar2, m, n);

	cout << "After Merging nFirst Array: ";
	for (int i = 0; i < m; i++)
		cout << ar1[i] << " ";
	cout << "nSecond Array: ";
	for (int i = 0; i < n; i++)
		cout << ar2[i] << " ";
	return 0;
}
