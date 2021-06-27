#include <iostream>
#include<string>
using namespace std;
void func(string str,int i,string newstr);
int main() 
{
	string str;
	int i=1;
	getline(cin,str);
	string c(1,str[0]);
	func(str,i,c);
	return 0;
}

void func(string str,int i,string newstr)
{
    
    if(str[i]=='\0')
    {
        cout<<newstr;
        return;
    }
    else
    {
        if(str[i]==str[i-1])
            func(str,++i,newstr);
        else
            {
                newstr.push_back(str[i]);
                func(str,++i,newstr);
            }
            
    }
}
