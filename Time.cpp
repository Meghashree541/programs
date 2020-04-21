#include<iostream>
#include<iomanip>
using namespace std;
class Time{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime();
        void timeinseconds();
        void display();
};
void Time::getTime()
{
    cout<<"Enter Time:"<<endl;
    cout<<"Hours?";
    cin>>hh;
    cout<<"Minutes?";
    cin>>mm;
    cout<<"Seconds?";
    cin>>ss;
}
void Time::timeinseconds()
{
    seconds=hh*3600+mm*60+ss;
}
void Time::display()
{
    cout<<"The time is=";
    cout<<setw(2)<<setfill('0')<<hh<<":";
    cout<<setw(2)<<setfill('0')<<mm<<":";
    cout<<setw(2)<<setfill('0')<<ss<<endl;
    cout<<"Time in total seconds:"<<seconds;
}
int main(){
    Time T;
    T.getTime();
    T.timeinseconds();
    T.display();
    return 0;
}