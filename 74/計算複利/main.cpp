#include <iostream>

using namespace std;

int main()
{
    // Put your code below
	double a, c;
	int b;
	while(cin>>a>>b>>c)
	{
		double ans=0.0, before=0;
		for(int i=0;i<b;i++)
		{
			ans+=c;
			ans*=(1+a);
		}
		int ans2=(int) ans;
		cout<<ans2<<endl;
	}
    return 0;
}
