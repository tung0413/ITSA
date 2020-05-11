#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Put your code below
	int cases;
	cin>>cases;
	while(cases--)
	{
		double x, y, dist;
		cin>>x>>y;
		dist=sqrt(fabs(10-x)*fabs(10-x)+fabs(10-y)*fabs(10-y));
		for(int i=0;i<10;i++)
		{
			if(dist==0)
			{
				cout<<10<<endl;
				break;
			}
			if(dist>10)
			{
				cout<<0<<endl;
				break;
			}
			if(dist>i&&dist<=i+1)
			{
				cout<<10-i<<endl;
				break;
			}
		}
	}
    return 0;
}
