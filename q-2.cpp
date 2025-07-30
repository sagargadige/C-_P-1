#include<iostream>
using namespace std;
class Sec{
    public:
    int h,m,s,totalsec;

    void setSec(){
        cout<<"Enter the Hour:";
        cin>>h;
        cout<<"Enter the Minutes:";
        cin>>m;
        cout<<"Enter the Second:";
        cin>>s;
        totalsec=h*3600+m*60+s;
    }
    void getSec(){
        cout<<"Your total second is:"<<totalsec;
    }
};

int main()
{
    Sec s;
    s.setSec();
    s.getSec();
    return 0;
}