#include <iostream>
#include <cmath>

using namespace std;

int square(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	if(x1==x2&&y1==y2)return 0;
	if(x1==x3&&y1==y3)return 0;
	if(x1==x4&&y1==y4)return 0;
	if(x2==x3&&y2==y3)return 0;
	if(x2==x4&&y2==y4)return 0;
	if(x3==x4&&y3==y4)return 0;
	double middleX=(double)(x1+x2+x3+x4)/4;
	double middleY=(double)(y1+y2+y3+y4)/4;
	double middle1=fabs(x1-middleX)*fabs(x1-middleX)+fabs(y1-middleY)*fabs(y1-middleY);
	double middle2=fabs(x2-middleX)*fabs(x2-middleX)+fabs(y2-middleY)*fabs(y2-middleY);
	double middle3=fabs(x3-middleX)*fabs(x3-middleX)+fabs(y3-middleY)*fabs(y3-middleY);
	double middle4=fabs(x4-middleX)*fabs(x4-middleX)+fabs(y4-middleY)*fabs(y4-middleY);
	if(middle1==middle2&&middle3==middle4&&middle2==middle3)
	{

		if((fabs(x1-x2)*fabs(x1-x2)+fabs(y1-y2)*fabs(y1-y2))==middle1*4)
			if((fabs(x1-x3)*fabs(x1-x3)+fabs(y1-y3)*fabs(y1-y3))==(fabs(x1-x4)*fabs(x1-x4)+fabs(y1-y4)*fabs(y1-y4)))
				return middle1*2;
		if((fabs(x1-x3)*fabs(x1-x3)+fabs(y1-y3)*fabs(y1-y3))==middle1*4)
			if((fabs(x1-x2)*fabs(x1-x2)+fabs(y1-y2)*fabs(y1-y2))==(fabs(x1-x4)*fabs(x1-x4)+fabs(y1-y4)*fabs(y1-y4)))
				return middle1*2;
		if((fabs(x1-x4)*fabs(x1-x4)+fabs(y1-y4)*fabs(y1-y4)==middle1*4))
			if((fabs(x1-x2)*fabs(x1-x2)+fabs(y1-y2)*fabs(y1-y2))==(fabs(x1-x3)*fabs(x1-x3)+fabs(y1-y3)*fabs(y1-y3)))
				return middle1*2;
	}
	return 0;

}

int main()
{
    // Put your code below
    int a;
    while(cin>>a)
    {
    	int x1, x2, x3, x4, y1, y2, y3, y4;
    	int xx1, xx2, xx3, xx4, yy1, yy2, yy3, yy4;
    	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    	cin>>xx1>>yy1>>xx2>>yy2>>xx3>>yy3>>xx4>>yy4;
    	x1*=a;
    	x2*=a;
    	x3*=a;
    	x4*=a;
    	xx1*=a;
    	xx2*=a;
    	xx3*=a;
    	xx4*=a;
    	y1*=a;
    	y2*=a;
    	y3*=a;
    	y4*=a;
    	yy1*=a;
    	yy2*=a;
    	yy3*=a;
    	yy4*=a;
    	int ans1, ans2;
    	ans1=square(x1, y1, x2, y2, x3, y3, x4, y4);
    	if(ans1==0)cout<<"No"<<endl;
    	else cout<<"Yes "<<ans1<<endl;
    	ans2=square(xx1, yy1, xx2, yy2, xx3, yy3, xx4, yy4);
    	if(ans2==0)cout<<"No"<<endl;
    	else cout<<"Yes "<<ans2<<endl;
    	if(ans1>ans2)cout<<"A"<<endl;
    	else if(ans1<ans2)cout<<"B"<<endl;
    	else cout<<"Peace"<<endl;
    }
    return 0;
}
