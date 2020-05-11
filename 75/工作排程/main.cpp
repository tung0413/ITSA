#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int sum, arr[101], sum2, min, cnt=0;
		for(int i=0;i<101;i++)
			arr[i]=0;
		sum2=0;
		sum=0;
		int nn;
		cin>>nn;
		for(int i=0;i<nn;i++)
			cin>>arr[i];
		char x;
		cin>>x;
		if(x=='A')
			for(int i=0;i<nn-1;i++)
			{
				sum+=arr[i];
				sum2+=sum;
			}
		else if(x=='B')
		{
			while(1)
			{
				if(cnt==nn-1)break;
				for(int i=0;i<nn;i++)
					if(arr[i]<301)
					{
						min=arr[i];
						break;
					}
				for(int i=0;i<nn;i++)
					if(min>arr[i])
						min=arr[i];
				for(int i=0;i<nn;i++)
					if(arr[i]==min)
					{
						arr[i]=301;
						break;
					}
				sum+=min;
				sum2+=sum;
				cnt++;
			}
		}
		cout<<sum2<<"\n";
	}
}
