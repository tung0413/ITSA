#include <iostream>
using namespace std;

void f1(int a1,int a2,int b1,int b2, int &n1,int &n2)
{
	n2=a2;
	n1=a1+b1;
}

void f2(int a1,int a2,int b1,int b2, int &n1,int &n2)
{
	n2= a2;
	n1=max(a1,b1)-min(a1,b1);
}

void f3(int a1,int a2,int b1,int b2, int &n1,int &n2)
{
	n2=a2*b2;
	n1=a1*b1;
}

void f4(int a1,int a2,int b1,int b2, int &n1,int &n2)
{
	n1=a1;
	n2=b1;
}

void final(int &a,int &b)
{
	for(int i= 2;i<=min(a,b); i++)
		if(a%i==0&&b%i==0)
		{
			a/=i;
			b/=i;
			i--;
		}
}

void first(int &a1,int &a2,int &b1,int &b2)
{
	int i= 1;
	for( ; ; i++)
		if(i%a2==0&&i%b2==0)
			break;
	a1*=(i/a2);
	b1*=(i/b2);
	a2=b2=i;
}

int main()
{
	int cas1;
	cin>>cas1;
	while(cas1--)
	{
		char p;
		int a1,a2,b1,b2,n1,n2;
		cin>>a1>>p>>a2>>p>>b1>>p>>b2;
		first(a1,a2,b1,b2);
		f1(a1,a2,b1,b2,n1,n2);
		final(n1,n2);
		cout<<n1<<"/"<<n2<<endl;

		f2(a1,a2,b1,b2,n1,n2);
		final(n1,n2);
		cout<<n1<<"/"<<n2<<endl;

		f3(a1,a2,b1,b2,n1,n2);
		final(n1,n2);
		cout<<n1<<"/"<<n2<<endl;

		f4(a1,a2,b1,b2,n1,n2);
		final(n1,n2);
		cout<<n1<<"/"<<n2<<endl;
	}
}
