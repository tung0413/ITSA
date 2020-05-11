#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    while(getline(cin, str))
    {
    	vector<int> num;
	    int n=0, count=0;
	    for(int i=0;i<str.size();i++)
	    {
	    	int t=str[i]-48;
	    	if(t!=-16)n=(n*10)+t;
	    	else
	    	{
	    		num.push_back(n);
	    		n=0;
	    	}
	    }
	    num.push_back(n);
	    int  ans=0;
	   // double  half= num.size()/2;
	   int half;
	    if(num.size()%2==0) half=num.size()/2;
	    else half=(num.size()+1)/2;
	    for(int i=0;i<num.size();i++)
	    {
	    	count=0;
	    	for(int j=0;j<num.size();j++)
	    	{
	    		if(num[i]==num[j])count++;
	    	}
	    	if(count>half)ans=num[i];
	    }
	    if(num.size()==1)cout<<"n/a"<<endl;
	    else if(ans!=0)cout<<ans<<endl;
	    else cout<<"n/a"<<endl;
    }

}
