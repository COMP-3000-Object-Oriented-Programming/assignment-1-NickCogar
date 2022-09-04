#include <iostream>

using namespace std; 

int main() {

    int maxpeople;
    int occupants;

    cout << "Enter the maximum occupancy for the room. "<< endl;
    cin >> maxpeople;

    cout << "Enter the number of occupants in the room. "<< endl;
    cin >> occupants;

    if(occupants > maxpeople) {
        cout << "ATTENTION: MAXIMUM OCCUPANCY EXCEEDED. THE LAW REQUIRES " << occupants - maxpeople << " TO LEAVE IMMEDIATELY." << endl;
    }else{
        cout << "The number of occupants does not exceeded the legal maximum. " << endl;
    }

return 0; 
}

