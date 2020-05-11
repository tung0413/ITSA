#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        double in, out, ans=0;
        cin>>in>>out;
        if(in<=300)
        {
            ans+=in*3;
        }
        else if(in<=500)
        {
            ans+=in*2.7;
        }
        else if(in<=1000)
        {
            ans+=in*2.25;
        }
        else
        {
            ans+=in*1.5;
        }
        if(out<=300)
        {
            ans+=out*6;
        }
        else if(out<=500)
        {
           ans+=out*6;
        }
        else if(out<=1000)
        {
            ans+=out*5.4;
        }
        else
        {
            ans+=out*4.5;
        }
        cout<<fixed<<setprecision(0)<<(int)ans<<endl;
    }
}
