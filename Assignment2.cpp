#include <iostream>
using namespace std;

class polynomial
{
    int A[10]={0};
    int n;
    public:
    polynomial()
    {
        A[10]={0};
        n=10;
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
            A[digree[i]]=cofficient[i];
        }
    }
    
    void operator+(polynomial obj);
    void operator*(polynomial obj);
    void operator=(polynomial obj);
    void print()
    {
        for(int i=0;i<n;i++)
        {
            if(A[i])
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
void polynomial::operator*(polynomial obj)
{
    for(int i=0;i<obj.n;i++)
    {
        this->A[i]*=obj.A[i];
    }
    if(this->n<obj.n)
        this->n=obj.n;
    return;
}
void polynomial::operator=(polynomial obj)
{
    for(int i=0;i<obj.n;i++)
        {
            this->A[i]=obj.A[i];
        }
        this->n=obj.n;
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
