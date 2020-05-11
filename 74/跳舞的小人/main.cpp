#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    cin.get();
    while(cases--)
    {
    	string str;
    	getline(cin, str);
    	int flag=0;
    	for(int i=0;i<str.size();i++)
    	{
    		if(str[i]==' ')continue;
    		if(str[i]>='0'&&str[i]<='9')
    		{
    			for(int j=flag;j<i;j++)
    			{
    				if(str[j]==' ')continue;
    				if(str[j]>='0'&&str[j]<='9')continue;
    				if(str[j]>'Z'||str[j]<'A')continue;
    				int num=(int)str[i]-48;
    				str[j]+=num;
    				while(str[j]>'Z')str[j]-=26;
    			}
    			flag=i;
    		}
    	}
    	for(int i=0;i<str.size();i++)
    	{
    		if(str[i]>='A'&&str[i]<='Z')cout<<str[i];
    	}
    	cout<<endl;
    }
}
