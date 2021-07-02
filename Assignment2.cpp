#include <bits/stdc++.h>
using namespace std;

class polynomial
{
    int A[100]={0};
    int n;
    public:
    polynomial()
    {
        
    }
    polynomial(int* arr,int n)
    {
         for(int i=0;i<=n;i++)
         {
             this->A[i]=arr[i];
             cout<<this->A[i]<<endl;
         }
         this->n=n;
    }
    polynomial(const polynomial &obj)
    {
        for(int i=0;i<obj.n;i++)
        {
            this->A[i]=obj.A[i];
            
        }
        this->n=obj.n;
    }
    void SetCofficient(int* digree,int* cofficient,int n)
    {
        for(int i=0;i<n;i++)
        {
            this->A[digree[i]]=cofficient[i];
            //cout<<this->A[digree[i]]<<" "<<digree[i]<<endl;
        }
        this->n=digree[n-1];
        
    }
    
    void operator+(polynomial obj);
    polynomial operator*(polynomial &obj);
    void operator=(polynomial obj);
    void operator-(polynomial obj);
    void print()
    {
        for(int i=0;i<=n;i++)
        {   
            //cout<<A[i]<<" ";
            if(A[i]!=0)
            {
                cout<<A[i]<<"X"<<i<<" ";
            }
        }
        cout<<endl;
    }
    
};

void polynomial::operator+(polynomial obj)
{
    for(int i=0;i<obj.n;i++)
    {
        this->A[i]+=obj.A[i];
    }
    if(this->n<obj.n)
        this->n=obj.n;
    return;
}
polynomial polynomial::operator*(polynomial &obj)
{
    int arr[100]={0};
    int temp;
    
    //obj.print();
    for(int i=0;i<=this->n;i++)
    {   
        for(int j=0;j<=obj.n;j++)
        {
            temp=this->A[i]*obj.A[j];
            arr[i+j]+=temp;
            //cout<<this->A[i]<<" "<<obj.A[j]<<" "<<temp<<endl;
            //cout<<i<<" "<<j<<" "<<endl;
        }
        
        
    }
    this->n=this->n+obj.n;
    return polynomial(arr,this->n);
}
void polynomial::operator=(polynomial obj)
{
    for(int i=0;i<=obj.n;i++)
        {
            this->A[i]=obj.A[i];
        }
        this->n=obj.n;
}
void polynomial::operator-(polynomial obj)
{
    for(int i=0;i<obj.n;i++)
    {
        this->A[i]-=obj.A[i];
    }
    if(this->n<obj.n)
        this->n=obj.n;
    return;
}



int main() 
{
	int a;
	polynomial d1,d2,d3;
	int cofficient[10]={0},digree[10]={0};

	cin>>a;
    for(int i=0;i<a;i++)
	    cin>>digree[i];
	for(int i=0;i<a;i++)
	    cin>>cofficient[i];
	d1.SetCofficient(digree,cofficient,a);
	cin>>a;
    for(int i=0;i<a;i++)
	    cin>>digree[i];
	for(int i=0;i<a;i++)
	    cin>>cofficient[i];
	d2.SetCofficient(digree,cofficient,a);
    d1+d2;
    d1.print();
}

/*
Input format
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 2
*/
