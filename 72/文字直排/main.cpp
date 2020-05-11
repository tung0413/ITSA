#include <iostream>
#include <vector>
using namespace std;

int main()
{
   	string str;
   	getline(cin, str);
    char ch;
    cin>>ch;
    int row;
    cin>>row;
 	int len=str.size();
 	int col=row;
 	for(;col<len;)col+=row;
	int white=col-len;
	string str2;
	string ans;
	for(int i=0;i<white;i++)str2+=" ";
	ans=str2+str;
	int len2=ans.size();
	col/=row;
	col+=col-1;
	for(int i=len2-row;i<len2;i++)
	{
		int k=i;
		for(int j=0;j<col;j++)
		{
			if(j%2==0)
			{
				cout<<ans[k];
				k-=row;
			}
			else cout<<ch;
		}
		cout<<endl;
	}

}

