#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


int main()
{
	int n;
    while(cin>>n)
    {
    	if(n==0)break;
    	vector <int> a;
    	for(int i=0;i<n;i++)
    	{
    		int num;
    		cin>>num;
    		a.push_back(num);
    	}
    	int ans=0;
    	while(a.size()>1)
    	{
		    vector<int>::iterator minPosition = min_element(a.begin(), a.end());
		    if(minPosition - a.begin()-1==-1)
		    {
		    	ans+=a[minPosition - a.begin()+1];
		    	a.erase(minPosition);
		    }
		    else if(minPosition - a.begin()+1==a.size())
		    {
		    	ans+=a[minPosition - a.begin()-1];
		    	a.erase(minPosition);
		    }
		    else
		    {
		    	int big=a[minPosition - a.begin()+1], small=a[minPosition - a.begin()-1];
		    	if(	big>small)
		    	{
		    		ans+=a[minPosition - a.begin()-1];
		    		a.erase(minPosition);
		    	}
				else
				{
		    		ans+=a[minPosition - a.begin()+1];
			    	a.erase(minPosition);
				}
		    }
    	}
    	cout<<ans<<endl;
    }
}

