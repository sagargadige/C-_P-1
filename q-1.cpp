#include<iostream>
using namespace std;
class Time{
    int s,h,m,totalsec;
    public:
    void setTime(){
        cout<<"Enter total Sec:";
        cin>>totalsec;
        h=(totalsec/3600);
        m=(totalsec % 3600)/60;
        s=(totalsec % 60);
    }
    void getTime(){
        cout<<"HH:MM:SS = ";
        cout<<h<<":";
        cout<<m<<":";
        cout<<s<<endl;
    }
};

int main(){
    Time t;
    t.setTime();
    t.getTime();
}