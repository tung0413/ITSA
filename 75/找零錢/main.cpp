#include <iostream>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int money, _500=0, _100=0, _50=0, _10=0, _5=0, _1=0;
        cin>>money;
        money=1000-money;
        while(money!=0)
        {
            if(money>=500)
            {
                _500++;
                money-=500;
            }
            else if(money>=100)
            {
                _100++;
                money-=100;
            }
            else if(money>=50)
            {
                _50++;
                money-=50;
            }
            else if(money>=10)
            {
                _10++;
                money-=10;
            }
            else if(money>=5)
            {
                _5++;
                money-=5;
            }
            else if(money>=1)
            {
                _1++;
                money-=1;
            }
        }
        cout<<_50+_10+_5+_1<<endl;
        cout<<_500<<" "<<_100<<" "<<_50<<" "<<_10<<" "<<_5<<" "<<_1<<endl;
    }
}
