#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
//simple garage project

    int number;

    cout << "How many cars do you have? : ";
    cin >> number;
    cin.ignore(); //clear buffer

    //pointer for our array
    string* pCars = new string[number];

    for(int i = 0; i < number; i++){
        cout << "Enter car # " << i+1 << endl;
        getline(cin, pCars[i]);
    }

    cout << "Here is your garage!\n";
    cout << "--------------------\n";

     for(int i = 0; i < number; i++){
        cout << "Parking spot#" << i+1 << pCars[i] << endl;

    }
    return 0;
}