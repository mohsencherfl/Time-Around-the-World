#include<iostream>
#include<limits>
using namespace std;

int sign;
int gtmHour;
int gtmMinute;

void cities() {

    cout << "Choose cityA from the list below by entering the corresponding number:" << endl;
    cout << "   1 =====> Los Angeles" << endl;
    cout << "   2 =====> New York" << endl;
    cout << "   3 =====> Caracas" << endl;
    cout << "   4 =====> Buenos Aires" << endl;
    cout << "   5 =====> London" << endl;
    cout << "   6 =====> Rome" << endl;
    cout << "   7 =====> Moscow" << endl;
    cout << "   8 =====> Tehran" << endl;
    cout << "   9 =====> New Delhi" << endl;
    cout << "   10 =====> Beijing" << endl;
    cout << "   11 =====> Canberra" << endl << endl;

}

int citySelectionA() {

    cities();
    cout << "CityA: ";
    int cityA;
    cin >> cityA;
    while(cin.fail()) {
        cout << "       ***You need to enter a valid number***" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); ///skip bad input
        //cin.ignore(256,'\n');
        cities();
        cout << "CityA: ";
        cin >> cityA;
    }
    cout << endl;

    return cityA;
}

int citySelectionB() {

    cities();

    cout << "CityB: ";
    int cityB;
    cin >> cityB;
    while(cin.fail()) {
        cout << "       ***You need to enter a valid number***" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //skip bad input
        //cin.ignore(256,'\n');
        cities();
        cout << "CityB: ";
        cin >> cityB;
    }
    cout << endl;

    return cityB;
}

string cityNameA(int city) {

    switch(city) {

        case 1:
            return "Los Angeles";
        case 2:
            return "New York";
        case 3:
            return "Caracas";
        case 4:
            return "Buenos Aires";
        case 5:
            return "London";
        case 6:
            return "Rome";
        case 7:
            return "Moscow";
        case 8:
            return "Tehran";
        case 9:
            return "New Delhi";
        case 10:
            return "Beijing";
        case 11:
            return "Canberra";
    }
}

string cityNameB(int city) {

    return cityNameA(city);
}

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

void timeDifference(int cityA, int dateArr[], int cityB) {

    gmt(cityA);
    int cityHourA = gtmHour;
    int cityMinuteA = gtmMinute;
    gmt(cityB);
    int cityHourB = gtmHour;
    int cityMinuteB = gtmMinute;

    int hourDifference = (-1 * cityHourA) + cityHourB;
    int minuteDifference = 30;


    ///Hour and Minute Difference Calculations
    if(cityA < 5 && cityB < 5) {
        if(cityA < cityB) {
            if(!cityMinuteA && cityMinuteB)
                hourDifference--;
        }
        else if(cityA > cityB) {
            if(cityMinuteA && !cityMinuteB)
                hourDifference++;
        }
    }
    else if(cityA > 5 && cityB > 5) {
        if(cityA < cityB) {
            if(cityMinuteA && !cityMinuteB)
                hourDifference--;
        }
        else if(cityA > cityB) {
            if(!cityMinuteA && cityMinuteB)
                hourDifference++;
        }
    }
    else if(cityA > 5 && cityB < 5) {
        if(cityMinuteA && cityMinuteB) {
            hourDifference--;
        }
    }
    else if(cityA < 5 && cityB > 5) {
        if(cityMinuteA && cityMinuteB) {
            hourDifference++;
        }
    }

    if(!cityMinuteA && !cityMinuteB || cityMinuteA && cityMinuteB)
        minuteDifference = 0;


    ///Final Date Calculations
    int finalHour = dateArr[3];
    int finalMinute = dateArr[4];
    int finalMinuteDifference_1 = finalMinute + minuteDifference;
    int finalMinuteDifference_2 = finalMinute - minuteDifference;
    int finalDay = dateArr[2];
    int finalMonth = dateArr[1];
    int finalYear = dateArr[0];

    if(hourDifference > 0) {
        if(finalMinuteDifference_1 > 60) {
            //cout << endl << "First" << endl;
            finalHour += hourDifference + 1;
            finalMinute = finalMinuteDifference_1 - 60;
            if(finalHour >= 24) {
                finalHour -= 24;
                finalDay++;
                if(finalDay > 31) {
                    finalDay = 1;
                    finalMonth++;
                    if(finalMonth > 12) {
                        finalYear++;
                        finalMonth = 1;
                    }
                }
            }
        }
        else if(finalMinuteDifference_1 < 60) {
            //cout << endl << "Second" << endl;
            finalHour += hourDifference;
            finalMinute = finalMinuteDifference_1;
            if(finalHour >= 24) {
                finalHour -= 24;
                finalDay++;
                if(finalDay > 31) {
                    finalDay = 1;
                    finalMonth++;
                    if(finalMonth > 12) {
                        finalYear++;
                        finalMonth = 1;
                    }
                }
            }
        }
        else {
            //cout << endl << "First Last!!!!!" << endl;
            finalHour += hourDifference;
        }
    }

    if(hourDifference < 0) {
        if(finalMinuteDifference_2 < 0) {
            //cout << endl << "Third" << endl;
            finalHour += hourDifference - 1;
            finalMinute = 60 + finalMinuteDifference_2;
            if(finalHour < 0) {
                finalHour += 24;
                finalDay--;
                if(finalDay <= 0) {
                    finalDay = 31;
                    finalMonth--;
                    if(finalMonth <= 0) {
                        finalYear--;
                        finalMonth = 12;
                    }
                }
            }
        }
        else if(finalMinuteDifference_2 > 0) {
            //cout << endl << "Fourth" << endl;
            finalHour += hourDifference;
            finalMinute = finalMinuteDifference_2;
            if(finalHour < 0) {
                finalHour += 24;
                finalDay--;
                if(finalDay <= 0) {
                    finalDay = 31;
                    finalMonth--;
                    if(finalMonth <= 0) {
                        finalYear--;
                        finalMonth = 12;
                    }
                }
            }
        }
        else {
            //cout << endl << "Second Last!!!!!" << endl;
            finalHour += hourDifference;
        }
    }

    string year = to_string(finalYear);
    string month = to_string(finalMonth);
    string day = to_string(finalDay);
    string hour = to_string(finalHour);
    string minute = to_string(finalMinute);

    if(finalHour < 10)
        hour = modifyHour(hour);
    if(finalMinute < 10)
        minute = modifyMinute(minute);

    ///Printing the Final Date

    string firstCity = cityNameA(cityA);
    string secondCity = cityNameB(cityB);

    string final_date_format = year + "-" + month + "-" + day + " " + hour + ":" + minute;
    cout << "Your final date format:" << endl;
    cout << "                   " << "(\"" << firstCity << "\", \"" << final_date_format << "\", \"" << secondCity << "\")" << endl;

}
