#include<iostream>
#include<limits>
#include "cities.cpp"
#include "date-selection.cpp"
#include "greenwich-mean-time.cpp"
#include "time-difference.cpp"
using namespace std;


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
