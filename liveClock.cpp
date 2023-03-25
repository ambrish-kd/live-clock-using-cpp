// This is a program for a live clock(24-hours format) which ask for current time as input and then act like a actual digital clock.
// Author - Ambrish Dubey

#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    int hour, minutes, seconds, a, err;
    err = a = 0;
    cout<<"ENTER CURRENT TIME"<<endl;
    while(err == 0){
        cout<<"Enter hours: ";
        cin>>hour;
        cout<<"Enter minutes: ";
        cin>>minutes;
        cout<<"Enter seconds: ";
        cin>>seconds;
        if(hour<24 && minutes<60 && seconds<60)
            err++;
        else
            system("cls");
    }

    // 'a' used to keep clock running until we close it.
    while(a == 0){
        system("cls");
        cout<<hour<<" : "<<minutes<<" : "<<seconds<<""<<endl;
        Sleep(1000); // 1000ms - 1s
        seconds++;
        if(seconds>59){
            seconds=0;
            minutes++;
        }
        if(minutes>59){
            minutes=0;
            hour++;
        }
        if(hour>24){
            hour=0;
        }
    }
}