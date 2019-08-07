#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main(){

    string time;
    int hours, minutes;

    while (cin >> time, time != "0:00"){
        int pos = time.find(':');
        hours = stoi(time.substr(0, pos));
        minutes = stoi(time.substr(pos + 1));

        float angle = (hours*30) + 30*(minutes/60.0); //30 degrees in 5-minute interval for the hour
        angle = abs(angle - (minutes/60.0)*360); //angle due to minutes

        if (angle >= 180) angle = 360 - angle;

        cout << fixed << setprecision(3) << angle << endl;
    }

    return 0;
}