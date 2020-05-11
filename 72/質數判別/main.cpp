#include <iostream>
using namespace std;

int main()
{
    int num;
    while(cin>>num)
    {
    	if(num==0)break;
    	bool flag=true;
    	if(num==2)flag=true;
    	else if(num%2==0)flag=false;
    	else
    		for(int i=3;i<num;i++)
	    	{
	    		if(num%i==0)flag=false;
	    	}
    	if(flag==true)cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
}
