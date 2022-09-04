#include <iostream>

using namespace std; 

int main (){

    int time;
    int distance;

    cout << "Enter a time in seconds. "<< endl;
    cin >> time;

    distance = 0.5 * 32 * (time * time);
    cout << "An object in freefall for " << time << " seconds will fall " << distance << " feet." << endl;

    return 0;
}