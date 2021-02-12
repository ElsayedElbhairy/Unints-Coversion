#include "coding_test.cpp"
#include <bits/stdc++.h>

using namespace std;

int main(){

    double input;
    cout << "Please Enter a number to convert from Inches to Millimeters: ";
    cin >> input;
    cout << "The result is => " << inch_to_mill(input) << endl;


    cout << "Please an number to convert from Millimeters to Inches: ";
    cin >> input;
    cout << "The result is => " << mill_to_inch(input) << endl;

    cout << "Please Enter a number to convert from Meters per Second to Feet per Minute: ";
    cin >> input;
    cout << "The result is => " << meter_per_second_to_feet_per_minute(input) << endl;



    cout << "Please Enter a number to convert from Feet per Minute to Meters per Second: ";
    cin >> input;
    cout << "The result is => " << feet_per_minute_to_meter_per_second(input) << endl;


    cout << "Please Enter a number to convert from Ferhanheit to Celicius: ";
    cin >> input;
    cout << "The result is => " << fer_to_celicuis(input) << endl;


    cout << "Please Enter a number to convert from Celicius to Ferhanheit: ";
    cin >> input;
    cout << "The result is => " << celicuis_to_fer(input) << endl;

    return 0;
}