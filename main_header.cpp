/*
*Program contains only the main method
*Header file included in this mainfile
*/

#include <iostream>
#include "restaurant.h" //external header file included
#include "restaurant_code.cpp"   //another external file containing the functions and implementations
using namespace std;

/*
*Main method
*Takes hours and delivery lottery numbers as inputs and displays results
*Executes all functions 10 times
*/

int main(){
    for(int i = 0; i < 10; i++){
        int hours;
        int deliveries;
        cout <<"HAVE FUN" <<endl;
        cout << "Enter the number of hours you would like to rent this space for: "<< endl;
        cin >> hours;
        cout << "We're so sorry today. Due to inconveniences, we can only offer "<< Space_rentals(hours) <<" hours" <<endl;
        cout << "SURPRISE! Enter a number between 1 and 5 and win free number of deliveries. Largest number does not guarantee higher deliveries: " <<endl;
        cin >> deliveries;
        cout << "You have won "<< Delivery_lottery(deliveries) << " free deliveries" <<endl;
        cout <<"MORE TO COME!!!" <<endl;
        play_liveband_music();
        food_menu();
    }
    return 0;
}