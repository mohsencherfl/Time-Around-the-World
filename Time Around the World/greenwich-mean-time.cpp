#include<iostream>
#include<limits>
#include "cities.cpp"
#include "city-selection.cpp"
#include "date-selection.cpp"
#include "time-difference.cpp"
using namespace std;


void gmt(int city) {

    switch(city) {

        case 1:
            gtmHour = -8;
            gtmMinute = 0;
            break;
        case 2:
            gtmHour = -5;
            gtmMinute = 0;
            break;
        case 3:
            gtmHour = -4;
            gtmMinute = 30;
            break;
        case 4:
            gtmHour = -3;
            gtmMinute = 0;
            break;
        case 5:
            gtmHour = 0;
            gtmMinute = 0;
            break;
        case 6:
            gtmHour = 1;
            gtmMinute = 0;
            break;
        case 7:
            gtmHour = 3;
            gtmMinute = 0;
            break;
        case 8:
            gtmHour = 3;
            gtmMinute = 30;
            break;
        case 9:
            gtmHour = 5;
            gtmMinute = 30;
            break;
        case 10:
            gtmHour = 8;
            gtmMinute = 0;
            break;
        case 11:
            gtmHour = 10;
            gtmMinute = 0;
            break;
    }
}
