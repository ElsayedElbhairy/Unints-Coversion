/* 
    Author: Sayed Elbhairy
    Date: 02/12/2021
*/

#include "coding_test.h"
#include<bits/stdc++.h>

using namespace std;
double inch_to_mill(double inch){
    double answer = 0;
    answer = inch*25.4;
    return answer;
}
double mill_to_inch(double millimeter){
    double answer = 0;
    answer = millimeter/25.4;
    return answer;
}
double meter_per_second_to_feet_per_minute(double meter){
    double answer = 0;
    answer = meter*196.85;
    return answer;
}

double feet_per_minute_to_meter_per_second(double feet){
    double answer = 0;
    answer = feet/196.85;
    return answer;
}
double fer_to_celicuis(double temprature_in_F){
    double answer = 0;
    answer = (temprature_in_F - 32)*.5556;
    return answer;
}
double celicuis_to_fer(double temprature_in_C){
    double answer = 0;
    answer = (temprature_in_C * 1.8) + 32;
    return answer;
}
