#include<iostream>
#include<limits>
#include "cities.cpp"
#include "city-selection.cpp"
#include "date-selection.cpp"
#include "greenwich-mean-time.cpp"
using namespace std;


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
    else if(hourDifference < 0) {
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
