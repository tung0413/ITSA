#include <iostream>
#include <map>
#include <string>
using namespace std;


int main()
{
	int cas;
	cin>>cas;
	int c[101]={0};
	for(int k=0;k<cas;k++)
			cin>>c[k];

	for(int j=0;j<cas;j++)
	{
		map<string,int> a;
	    map<string, int>::iterator iter;

		for(int i=0;i<c[j];i++)
		{
			string b;
			cin>>b;
			iter = a.find(b);
			if(iter==a.end())
				a[b]= 1;
			else
				iter->second++;
		}
		int ans= 0;
		for(iter = a.begin(); iter != a.end(); iter++)
		 	if(iter->second%2==1) ans++;
        cout<<ans<<endl;
    }
}
