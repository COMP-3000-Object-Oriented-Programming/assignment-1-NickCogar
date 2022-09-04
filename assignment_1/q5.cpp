#include <iostream>

using namespace std; 

int main (){

    double n;
    double guess;
    double r;

    cout << "Enter a positive number. "<< endl;
    cin >> n;

    guess = n / 2;

    for(int i = 1; i; i++){
        r = n / guess;
        guess = (guess + r) / 2;
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << guess << endl;
}