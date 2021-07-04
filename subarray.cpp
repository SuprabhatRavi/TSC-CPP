#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int arr[]={1,6,7,4,5};
	int sub[]={1,2,3};
	int sub2[]={1,6,5};
	sort(arr,arr+5);
	for(int i=0;i<3;i++)
	{
	    if(binary_search(arr,arr+5,sub2[i])==0)
	    {
	        cout<<"No";
	        return 0;
	    }
	}
	cout<<"yes";
	return 0;
	
}
