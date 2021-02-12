/*
*File contains functions defined
*Included in an external main file
*/

#include <iostream>
using namespace std;

/*
*This method allows users to rent restaurant space for ceremonial purposes
*Allows user to enter number of hours preferred
*However, due to unforseen circumstances, it can only offer about a half or less of the hours preferred
*Takes number of hours as a paramter and returns available hours
*/

int Space_rentals(int number_of_hours){
    int possible_hours = number_of_hours/2;
    return possible_hours;
}

/*
*This method provides a special offer
*Takes number as input
*Users enter a number between 1 and 5 to earn a certain number of free deliveries based on the restaurant's allocation of the numbers
*Choosing higher number does not guarantee highest free deliveries.
*Any number chosen out of 1 - 5 automatically gives you no free delivery.
*/

int Delivery_lottery(int number){
    switch(number){
        case 1:
        return 3;
        break;
        case 2:
        return 1;
        break;
        case 3:
        return 5;
        break;
        case 4:
        return 4;
        break;
        case 5:
        return 0;
        break;
    }
}

/*
*This method provides users with available music tonight
*/

void play_liveband_music(){
    cout <<"Today we have: Hiplife & Reggae music to refresh your soul"<< endl;
}

/*
*This method announces the type of dishes available tonight
*/

void food_menu(){
    cout <<"All local and intercontonental dishes displayed on the menu are available to be served!" <<endl;
}