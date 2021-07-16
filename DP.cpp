
#include <iostream>
#include<algorithm>
#include<iterator>
#include<climits>
using namespace std;

int fun(int *arr,int d,int n,int index=0)
{
    if(d==1)
    {
        int Max=0;
        int i=index;
        while(i<n) Max=max(Max,arr[i++]);
        return Max;
    }
    
    int Max=0;
    int res=INT_MAX;
    for(int i=index;i<n-d+1;i++)
    {
        Max=max(Max,arr[i]);
        res=min(res,Max+fun(arr,d-1,n,i+1));
    }
    return res;
}

int main() {
	int arr[]={1,7,1,7,1,7,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d=2;
	
	cout<<fun(arr,d,n);
	
	
	return 0;
}
