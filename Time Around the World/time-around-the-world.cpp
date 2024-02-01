#include<iostream>
#include "all-functions.cpp"
using namespace std;

int main() {

    int cityA = citySelectionA();
    while(cityA <= 0 || cityA > 11) {
        cout << "       ***You need to enter a number between 1 and 11***" << endl;
        cityA = citySelectionA();
    }

    int cityB = citySelectionB();
    while(cityB <= 0 || cityB > 11) {
        cout << "       ***You need to enter a number between 1 and 11***" << endl;
        cityB = citySelectionB();
    }

    string firstCity = cityNameA(cityA);
    string secondCity = cityNameB(cityB);

    cout << "               \"CityA =====> " << firstCity << "\"" << endl;
    cout << "               \"CityB =====> " << secondCity << "\"" << endl;

    cout << "                   *************************************" << endl << endl;
    cout << "Now enter the date in the following order:" << endl << endl;

    int n = 5;
    int dateArr[n];
    string year = "year";
    string month = "month";
    string day = "day";
    string hour = "hour";
    string minute = "minute";

    int checkYear = date(dateArr, year);
    while(checkYear < 1900 || checkYear > 2030) {
        cout << "       ***The year should be between 1900 and 2030***" << endl;
        checkYear = date(dateArr, year);
    }
    cout << "               \"Year =====> " << checkYear << "\"" << endl;

    int checkMonth = date(dateArr, month);
    while(checkMonth <=0 || checkMonth > 12) {
        cout << "       ***The month should be between 1 and 12***" << endl;
        checkMonth = date(dateArr, month);
    }
    cout << "               \"Month =====> " << checkMonth << "\"" << endl;

    int checkDay = date(dateArr, day);
    while(checkDay <=0 || checkDay > 31) {
        cout << "       ***The day should be between 1 and 31***" << endl;
        checkDay = date(dateArr, day);
    }
    cout << "               \"Day =====> " << checkDay << "\"" << endl;

    int checkHour = date(dateArr, hour);
    while(checkHour < 0 || checkHour >= 24) {
        cout << "       ***The hour should be between 0 and 23***" << endl;
        checkHour = date(dateArr, hour);
    }
    cout << "               \"Hour =====> " << checkHour << "\"" << endl;

    int checkMinute = date(dateArr, minute);
    while(checkMinute < 0 || checkMinute >= 60) {
        cout << "       ***The minute should be between 0 and 59***" << endl;
        checkMinute = date(dateArr, minute);
    }
    cout << "               \"Minute =====> " << checkMinute << "\"" << endl << endl << endl;

    cout << "*******************************" << endl;
    cout << "Year =====> " << checkYear << endl;
    cout << "Month =====> " << checkMonth << endl;
    cout << "Day =====> " << checkDay << endl;
    cout << "Hour =====> " << checkHour << endl;
    cout << "Minute =====> " << checkMinute << endl;
    cout << "*************************************" << endl;

    string strYear = to_string(dateArr[0]);
    string strMonth = monthName(dateArr[1]);
    string strDay = to_string(dateArr[2]);
    string strHour = to_string(dateArr[3]);
    string strMinute = to_string(dateArr[4]);

    if(dateArr[3] < 10)
        strHour = modifyHour(strHour);
    if(dateArr[4] < 10)
        strMinute = modifyMinute(strMinute);

    string fullDate = strMonth + " " + strDay + ", " + strYear + " " + strHour + ":" + strMinute;

    cout << "Your selected date formatted in full U.S. Notation:" << endl;
    cout << "                   " << "(\"" << firstCity << "\", \"" << fullDate << "\", \"" << secondCity << "\")" << endl << endl;


    timeDifference(cityA, dateArr, cityB);

    return 0;
}
