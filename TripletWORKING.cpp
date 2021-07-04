#include <bits/stdc++.h>
using namespace std;

int triplets(int arr[], int n, int sum)
{
	int l, r;

	sort(arr, arr + n);

	for (int i = 0; i < n - 2; i++) {

		l = i + 1; 

		r = n - 1; 
		while (l < r) {
			if (arr[i] + arr[l] + arr[r] == sum) {
				printf("Triplet is %d, %d, %d", arr[i],
					arr[l], arr[r]);
				return 1;
			}
			else if (arr[i] + arr[l] + arr[r] < sum)
				l++;
			else 
				r--;
		}
	}
	return 0;
}

int main()
{
	int X,n,arr[10];
	cin>>n>>X;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	triplets(arr, n, X);

	return 0;
}
