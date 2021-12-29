#include<iostream>

using namespace std;

class time{
    int hour;
    int minute;
    int second;
    public :

        time(){
            hour=0;
            minute=0;
            second=0;
        }
        void setdata(){
            cout<<"enter hour ";
            cin>>hour;
            cout<<"enter minute ";
            cin>>minute;
            cout<<"enter second ";
            cin>>second;
        }

        void display(){
            cout<<"hour : "<<hour;
            cout<<"minute : "<<minute;
            cout<<"second : "<<second;
        }

        friend time operator +(time,time);
        // time operator +(time t1,time t2){
        //     time t3;
        //     t3.hour = t1.hour + t2.hour;
        //     t3.minute = t1.minute + t2.minute;
        //     t3.second = t1.second + t2.second;

        //     t3.hour = t3.hour + t3.minute/60;
        //     t3.minute += t3.minute%60;

        //     t3.minute = t3.minute + t3.second/60;
        //     t3.second += t3.second%60;

        //     return t3;
        // }
};

time operator +(time t1,time t2){
            time t3;
            t3.hour = t1.hour + t2.hour;
            t3.minute = t1.minute + t2.minute;
            t3.second = t1.second + t2.second;

            t3.hour = t3.hour + t3.minute/60;
            t3.minute = t3.minute%60;

            t3.minute = t3.minute + t3.second/60;
            t3.second = t3.second%60;

            return t3;
        }

int main(){
    time t1,t2,t3;
    t1.setdata();
    t2.setdata();
    t3 = t1 + t2;
    t3.display();

    return 0;
}