#include <iostream>
using namespace std;

int main() 
{
	int n,pre;
	int arr[100];
	int i,j;
	cin>>n;
	for(int k=0;k<n;k++)
	    cin>>arr[k];
	pre=arr[0];
	for(i=1,j=0;j<n;j++)
	{
	    if(arr[j]==pre)
	    {
	        arr[i]=arr[j];
	        --i;
	    }
	    else
	    {
	        pre=arr[j];
	        arr[i]=arr[j];
	    }
	    i++;
	}
	for(int k=0;k<i;k++)
	    cout<<arr[k]<< " ";
	return 0;
}
