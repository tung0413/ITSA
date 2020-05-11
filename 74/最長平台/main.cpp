#include <iostream>

using namespace std;

int main()
{
    // Put your code below
	int cases;
	cin>>cases;
	while(cases--)
	{
		int num;
		cin>>num;
		int pre=99, now, count=0, bigCount=0;
		for(int i=0;i<num;i++)
		{
 			cin>>now;
 			if(pre==now)
 			{
 				count++;
 			}
 			else
 			{
 				bigCount=bigCount>count? bigCount:count;
 				count=0;
 			}
 			pre=now;
		}
		bigCount=bigCount>count? bigCount:count;
		cout<<bigCount+1<<endl;
	}
    return 0;
}

