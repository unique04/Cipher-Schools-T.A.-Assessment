#include <bits/stdc++.h>
using namespace std;

int knapSack(int capacity, int weights[], int values[], int n)
{
	int ans[n + 1][capacity + 1];

	for(int i = 0; i <= n; i++){
		for(int c = 0; c <= capacity; c++){
			if (i == 0 || c == 0)
				ans[i][c] = 0;
			else if (weights[i - 1] <= c)
				ans[i][c] = max(values[i - 1] + ans[i - 1][c - weights[i - 1]],ans[i - 1][c]);
			else
				ans[i][c] = ans[i - 1][c];
		}
	}
	return ans[n][capacity];
}

int main()
{
	int values[] = {12,10,21,15};
	int weights[] = {2,1,3,2};
	int capacity = 7;
	int n = sizeof(values) / sizeof(values[0]);
	cout << knapSack(capacity, weights, values, n);
	return 0;
}
