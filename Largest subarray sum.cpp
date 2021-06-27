#include<iostream>
using namespace std;

int max(int* a, int size)
{
	int Fmax = -99999, current_max = 0;

	for (int i = 0; i < size; i++)
	{
		current_max = current_max + a[i];
		if (current_max > Fmax)
			Fmax = current_max;

		if (current_max < 0)
			current_max = 0;
	}
	return Fmax;
}

int main()
{
	int sum,n;
	int arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	cout << "MAX SUM IS: " << max(arr, n);
	return 0;
}
