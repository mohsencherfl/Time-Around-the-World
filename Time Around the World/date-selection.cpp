#include<iostream>
#include<limits>
#include "cities.cpp"
#include "city-selection.cpp"
#include "greenwich-mean-time.cpp"
#include "time-difference.cpp"


using namespace std;


string monthName(int month) {

    switch(month) {

    case 1:
        return "January";
    case 2:
        return "February";
    case 3:
        return "March";
    case 4:
        return "April";
    case 5:
        return "May";
    case 6:
        return "June";
    case 7:
        return "July";
    case 8:
        return "August";
    case 9:
        return "September";
    case 10:
        return "October";
    case 11:
        return "November";
    case 12:
        return "December";
    }
}

int date(int dateArr[], string flag) {

    if(flag == "year") {
        cout << "Year: ";
        int year;
        cin >> year;
        while(cin.fail()) {
            cout << "       ***You need to enter a valid date***" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); ///skip bad input
            //cin.ignore(256,'\n');
            cout << "Year: ";
            cin >> year;
        }
        dateArr[0] = year;
        return dateArr[0];
    }
    if(flag == "month") {
        cout << "Month: ";
        int month;
        cin >> month;
        while(cin.fail()) {
            cout << "       ***You need to enter a valid date***" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); ///skip bad input
            //cin.ignore(256,'\n');
            cout << "Month: ";
            cin >> month;
        }
        dateArr[1] = month;
        return dateArr[1];
    }
    if(flag == "day") {
        cout << "Day: ";
        int day;
        cin >> day;
        while(cin.fail()) {
            cout << "       ***You need to enter a valid date***" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); ///skip bad input
            //cin.ignore(256,'\n');
            cout << "Day: ";
            cin >> day;
        }
        dateArr[2] = day;
        return dateArr[2];
    }
    if(flag == "hour") {
        cout << "Hour: ";
        int hour;
        cin >> hour;
        while(cin.fail()) {
            cout << "       ***You need to enter a valid date***" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); ///skip bad input
            //cin.ignore(256,'\n');
            cout << "Hour: ";
            cin >> hour;
        }
        dateArr[3] = hour;
        return dateArr[3];
    }
    if(flag == "minute") {
        cout << "Minute: ";
        int minute;
        cin >> minute;
        while(cin.fail()) {
            cout << "       ***You need to enter a valid date***" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); ///skip bad input
            //cin.ignore(256,'\n');
            cout << "Minute: ";
            cin >> minute;
        }
        dateArr[4] = minute;
        return dateArr[4];
    }
}

string modifyHour(string hour) {

    return "0" + hour;
}

string modifyMinute(string minute) {

    return "0" + minute;
}
